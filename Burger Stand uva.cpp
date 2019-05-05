#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int sizes = s.size();
        int result =0;
        for(int j=0; j<sizes; j++)
        {
            if(s[j]=='-')
            {
                if(j==0)
                {
                    if((j+1)==(sizes-1))
                    {
                        if(s[j+1]!='B' && s[j+1]!='S')
                        {
                            result++;
                        }
                    }

                    else if((j+2)==(sizes-1))
                    {
                        if(s[j+2]!='B')
                        {
                            if(s[j+1]!='B' && s[j+1]!='S')
                            {
                                result++;
                            }
                        }
                    }
                    else
                    {
                        if(s[j+2]!='B')
                        {
                            if(s[j+1]!='B' && s[j+1]!='S')
                            {
                                result++;
                            }
                        }
                    }
                }
                else if(j==(sizes-1))
                {
                    if(s[j-1]!='S')
                    {
                        result++;
                    }
                }
                else if((j+2)<=(sizes-1))
                {
                    if(s[j+2]!='B')
                    {
                        if(s[j+1]!='B' && s[j+1]!='S' && s[j-1]!='S')
                        {
                            result++;
                        }
                    }
                }
                else if((j+1)<=(sizes-1))
                {
                    if(s[j+1]!='B' && s[j+1]!='S' && s[j-1]!='S')
                    {
                        result++;
                    }
                }
            }
        }
        cout<<"Case "<<i+1<<": "<<result<<endl;
    }
}

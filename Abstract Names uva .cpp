#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a="aeiou";
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
        string f,s;
        int counter1=0,counter2=0,counter=0;
        cin>>f;
        cin>>s;
        int size1,size2;
        size1=f.size();
        size2=s.size();
        if(size1==size2)
        {
            for(int j=0;j<size1;j++)
            {
                if(f[j]!=s[j])
                {
                    for(int k=0;k<5;k++)
                    {
                        if(f[j]==a[k])
                            counter1=1;
                        else if(s[j]==a[k])
                            counter2=1;
                    }
                    if(counter1==1 && counter2==1)
                    {
                        counter++;
                        counter1=0;
                        counter2=0;
                    }
                    else
                    {
                        cout<<"No"<<endl;
                        break;
                    }
                }
                else
                {
                    counter++;
                }
            }
            if(counter==size1)
                cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}

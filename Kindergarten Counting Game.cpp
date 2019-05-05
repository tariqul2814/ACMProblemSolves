#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    while(getline(cin,n))
    {
        int s,sum=0;
        s=n.size();
        for(int i=0; i<s; i++)
        {
            if((n[i]>='A' && n[i]<='Z') || (n[i]>='a' && n[i]<='z'))
            {
                while(1)
                {
                    if((n[i]>='A' && n[i]<='Z') || (n[i]>='a' && n[i]<='z'))
                    {
                        i++;
                    }
                    else
                    {
                        i--;
                        break;
                    }

                }
                sum++;

            }
        }
        cout<<sum<<endl;


    }
}

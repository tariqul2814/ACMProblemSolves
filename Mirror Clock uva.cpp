#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int m,n;
        scanf("%d:%d",&m,&n);
        if(n==0)
        {
            if(m==12)
            {
                cout<<m<<":"<<"0"<<n<<endl;
            }
            else if(m==6)
            {
                cout<<"0"<<m<<":"<<"0"<<n<<endl;
            }
            else
            {
                m=12-m;
                if(m<10)
                {
                    cout<<"0"<<m<<":"<<"0"<<n<<endl;
                }
                else
                {
                    cout<<m<<":"<<"0"<<n<<endl;
                }
            }
        }
        else
        {
            if(m==12)
            {
                m=m-1;
                n=60-n;
                if(m<10)
                    cout<<"0"<<m<<":";
                else
                    cout<<m<<":";
                if(n<10)
                    cout<<"0"<<n<<endl;
                else
                    cout<<n<<endl;
            }
            else
            {
                if(m==11)
                {
                    m=11+1;
                }
                else
                {
                    m=12-m;
                    m=m-1;
                }
                n=60-n;
                if(m<10)
                    cout<<"0"<<m<<":";
                else
                    cout<<m<<":";
                if(n<10)
                    cout<<"0"<<n<<endl;
                else
                    cout<<n<<endl;
            }

        }
    }

}

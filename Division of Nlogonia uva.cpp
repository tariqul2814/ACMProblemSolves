#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        long long int a,b;
        cin>>a>>b;
        for(long long int i=0;i<n;i++)
        {
            long long int x,y;
            cin>>x>>y;
            if(a<x)
            {
                if(b<y)
                {
                    cout<<"NE"<<endl;
                }
                else if(b>y)
                {
                    cout<<"SE"<<endl;
                }
                else
                {
                    cout<<"divisa"<<endl;
                }
            }
            else if(a>x)
            {
                if(b<y)
                {
                    cout<<"NO"<<endl;
                }
                else if(b>y)
                {
                    cout<<"SO"<<endl;
                }
                else
                {
                    cout<<"divisa"<<endl;
                }
            }
            else
            {
                cout<<"divisa"<<endl;
            }
        }
    }
}

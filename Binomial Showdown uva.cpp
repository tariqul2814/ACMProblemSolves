#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
        {
            break;
        }
        long long int a,b,c;
        long long int result;
        result = 1;

        a = n;
        if(m==0)
        {
            b = 1;
            c = (n-m);
        }
        else
        {
            b = m;
            c = (n-m);
        }
        if(b>=c)
        {
            //cout<<"Enter"<<endl;
            if(m==0)
            {
                result = 1;
            }
            else
            {
                a = b+1;
                for(long long int i = 1; i<=c; i++)
                {
                    result *= i;
                }
                //cout<<result<<" "<<a<<endl;


                int counter=0;
                long long int result1 = 1;

                for(long long int j=a; j<=n; j++)
                {
                    result1 *= j;

                }
                result = result1/result;
            }
        }
        else if(b<c)
        {
            if(m==0)
            {
                result = 1;
            }
            else
            {
                a = c+1;
                for(long long int i = 1; i<=b; i++)
                {
                    result *= i;
                }


                long long int result1 = 1;

                for(long long int j=a; j<=n; j++)
                {
                    result1 *= j;

                }
                result = result1/result;
            }
        }
        long long int ans;
        ans = (long long int) result;
        cout<<ans<<endl;
    }

}

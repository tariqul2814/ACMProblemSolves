#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++)
    {
        long long int x,y,sum=0;
        scanf("%lld",&x);
        long long int h[x];
        for(int j=0;j<x;j++)
        {
            scanf("%lld",&h[j]);
        }
        for(int j=0;j<x;j++)
        {
           sum+=h[j] ;
        }
        printf("%lld\n",sum%1000000007);
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
unsigned long long int m,x;
int main()
{
    long long int n;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&m);
        printf("%lld\n",m%1000000007);
    }
    return 0;
}

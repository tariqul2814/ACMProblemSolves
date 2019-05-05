#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int n,counter=0;
        scanf("%lld",&n);
        for(long long int j=1;j<n;j++)
        {
            long long int f=j*j;
            if(f<n)
            {
                long long int p;
                p=abs(f-n);
                counter+=p;
            }
            else
            {
                break;
            }
        }
        printf("%lld\n",counter);

    }

}

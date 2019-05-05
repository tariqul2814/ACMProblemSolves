#include <bits/stdc++.h>
using namespace std;
int prime[1000000];
int main()
{
    int n,squrt;
    int x=1000000;
    for(int i=0;i<1000000;i++)
        prime[i]=0;
    for(int i=2;i<=x;i++)
    {
        if(prime[i]==0)
        {
            for(int j=2*i;j<=x;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    while(scanf("%d",&n))
    {
        int m,l=0,f,maxi=0,mini=0,a=0;
        if(n==0)
            break;
        m=2;
        f=abs(n-m);
        if(m>f)
            continue;
        if(prime[f]==0)
        {
            maxi=max(m,f);
            mini=min(m,f);
            l=maxi-mini;
        }
        for(long long int i=3;i<n;i+=2)
        {
            if(prime[i]==0)
            {
                m=i;
                f=n-m;
                if(m>f)
                    continue;
                if(prime[f]==0)
                {
                    int q,w;
                    q=max(m,f);
                    w=min(m,f);
                    m=q;
                    f=w;
                    a=m-f;
                    if(l<=a)
                    {
                        maxi=m;
                        mini=f;
                        l=maxi-mini;
                    }
                }
            }
        }
        printf("%d = %d + %d\n",n,mini,maxi);
    }
}

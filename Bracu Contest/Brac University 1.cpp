#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q,i=0,m;
    long long int arr[100000];
    scanf("%lld %lld",&n,&q);
    m=n;
    for(long long int j=0; j<n; j++)
    {
        scanf("%lld",&arr[j]);
    }
    for(long long int j=0; j<q; j++)
    {
        long long int x;
        scanf("%lld",&x);
        long long int mid,first=0,last=m-1;
        mid=first+last;
        mid=mid/2;
        while(arr[mid]!=x)
        {
            if(first>last)
                break;
            if(arr[mid]<x)
            {
                first=mid+1;
                mid=first+last;
                mid=mid/2;
            }
            else if(arr[mid]>x)
            {
                last=mid-1;
                mid=first+last;
                mid=mid/2;
            }
        }
        if(arr[mid]==x)
        {
            long long int f;
            if(mid!=0)
            {
                for(f=mid; f>=0; f--)
                {
                    if(arr[f]!=x)
                    {
                        f++;
                        break;
                    }

                }
                if(f<mid)
                {
                    printf("%lld\n",f);
                }
                else
                {
                    printf("%lld\n",mid);
                }
            }
            else
            {
                printf("%lld\n",mid);
            }
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}

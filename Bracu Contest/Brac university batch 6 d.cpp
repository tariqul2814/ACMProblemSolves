#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%lld",&t);
    for(int i=0; i<t; i++)
    {
        long long int n,counter=0;
        scanf("%lld",&n);
        long long int arr[n];
        long long int arr1[n];
        for(long long int i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
            counter+=arr[i];
            arr1[i]=counter;
        }
        int record=0;
        for(long long int i=1; i<n-1; i++)
        {
            long long int counter1,counter2;
            counter1=arr1[i-1];
            counter2=abs(arr1[i]-arr1[n-1]);
            if(counter2==counter1)
            {
                printf("YES\n");
                record=1;
                break;
            }

        }
        if(record==0)
        {
            printf("NO\n");
        }
    }
    return 0;
}

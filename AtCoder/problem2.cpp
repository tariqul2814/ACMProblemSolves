#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int counter=0,counter1=0;
    while(1)
    {
        counter=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                long long int x;
                x=arr[i];
                x=x/2;
                arr[i]=x;
                counter=0;
                continue;
            }
            else
            {
                counter=1;
                break;
            }
        }
        if(counter==1)
        {
            break;
        }
        else
        {
            counter1++;
        }
    }
    printf("%lld\n",counter1);

}

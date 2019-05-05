#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int counter=0;
    sort(arr,arr+n);
    for(long long int i=0;i<n-1;i++)
    {
        long long int first,last,x,mid;
        first=i+1;
        last=n-1;
        x=arr[i];
        x=x+m;
        mid=(first+last)/2;
        while(arr[mid]!=x)
        {
            if(first>last || i>=first || i>=last || i>=mid)
                break;
            if(arr[mid]>x)
            {
                last=mid-1;
                mid=(first+last)/2;
            }
            else if(arr[mid]<x)
            {
                first=mid+1;
                mid=(first+last)/2;
            }
        }
        if(arr[mid]==x)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin>>x;
    for(long long int q=0;q<x;q++)
    {
        long long int n,m;
        long long int counter=0,recorder=0;
        cin>>n>>m;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(long long int i=0;i<n;i++)
        {
            if(arr[i]<=m)
            {
                if((recorder+arr[i])<=m)
                {
                    recorder+=arr[i];
                    counter++;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}

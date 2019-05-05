#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q,i=0,m;
    long long int arr[100000];
    cin>>n>>q;
    m=n;
    while(n--)
    {
        cin>>arr[i];
        i++;
    }
    sort(arr,arr+m);
    while(q--)
    {
        long long int x;
        cin>>x;
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
            cout<<mid<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}

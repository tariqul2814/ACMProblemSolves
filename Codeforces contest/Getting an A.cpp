#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    double counter=0,ans=0,ans1=0;
    int rec=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        counter+=arr[i];
    }
    ans=counter/n;
    if(ans>=4.5)
    {
        cout<<0<<endl;
    }
    else
    {
        ans=(counter/ans)*4.5;
        ans1=abs(counter-ans);
        ans1=ceil(ans1);
        sort(arr,arr+n);
        int record=0,record1=0;
        record1=ans1;
        for(int i=0;i<n;i++)
        {
            if(record>=record1)
            {
                break;
            }
            else if(arr[i]<5)
            {
                record+=(5-arr[i]);
                rec++;
            }
        }
        cout<<rec<<endl;
    }
}

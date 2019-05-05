#include <bits/stdc++.h>
using namespace std;
int recur(int i,int arr[],int searchnum,int limit,int *p)
{
    if(i>=limit)
        return 0;
    if(arr[i]==searchnum)
    {
        *p=i;
        return 1;
    }
    else
    {
        int x=0;
        return x + recur(i+1,arr,searchnum,limit,p);
    }
}

int main()
{
    int n,position=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int f;
    cin>>f;
    for(int i=0;i<f;i++)
    {
        int x;
        cin>>x;
        if(recur(0,arr,x,n,&position)==0)
        {
            cout<<"Not Found"<<endl;
        }
        else
        {
            cout<<position<<endl;
        }
    }
}

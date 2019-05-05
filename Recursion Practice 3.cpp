#include <bits/stdc++.h>
using namespace std;

void recursion2(int i,int s,int* arr)
{
    if((i-1)==s)
        return;
    else
    {
        arr[i]=arr[i+1];
        recursion2(i+1,s,arr);
    }
}

void recursion1(int i,int s,int* arr)
{
    if(i==s)
        return;
    else if(arr[i]%2!=0)
    {
        recursion2(i,s--,arr);
        recursion1(i,s--,arr);
    }
    else
    {
        cout<<arr[i]<<endl;
        recursion1(i+1,s,arr);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    recursion1(0,n,arr);
    return 0;
}

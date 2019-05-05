#include <bits/stdc++.h>
using namespace std;

void recursion(int s,int e,int *arr,int point)
{
    if(e==point)
    {
       return;
    }
    recursion(s-1,e+1,arr,point);
    cout<<arr[s]<<" "<<arr[e]<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    recursion(2,2,arr,n);
}

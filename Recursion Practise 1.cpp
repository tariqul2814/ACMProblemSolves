#include <bits/stdc++.h>
using namespace std;

void recursion (int a,int i,int* arr1)
{
    if(a==i)
    {
        return;
    }

    recursion(a+1,i,arr1);
    cout<<arr1[a]<<endl;

}
int main()
{
    int n;
    int arr[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    recursion(0,n,arr);

}

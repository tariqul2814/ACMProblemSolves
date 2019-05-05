#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[13];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<13;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+13);
        if(arr[0]==0)
        {
            cout<<"Set #"<<i+1<<": "<<"No"<<endl;
        }
        else
            cout<<"Set #"<<i+1<<": "<<"Yes"<<endl;
    }
}

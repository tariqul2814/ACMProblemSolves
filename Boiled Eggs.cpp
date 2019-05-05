#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int counter=0,weight=0;
        int x,y,z;
        cin>>x>>y>>z;
        int arr[x];
        for(int j=0;j<x;j++)
            cin>>arr[j];
        for(int j=0;j<x;j++)
        {
           if(counter<y && (weight+arr[j])<=z)
           {
               counter++;
               weight+=arr[j];
           }
           else if(weight>=z || counter>=y)
           {
               break;
           }
        }
        cout<<"Case "<<i+1<<": "<<counter<<endl;
    }
}

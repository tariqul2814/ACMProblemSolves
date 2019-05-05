#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int n;
        cin>>n;
        long long int arr[n];
        for(long long int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int counter=0;
        for(long long int j=0;j<n-1;j++)
        {
            if(arr[j+1]-arr[j]==1)
            {
                counter=1;
                break;
            }
        }

        if(counter==0)
        {
            cout<<"Case "<<i+1<<": No"<<endl;
        }
        else
            cout<<"Case "<<i+1<<": Yes"<<endl;
    }

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        int n,k;
        cin>>n>>k;
        long long int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n, greater<long long int>());
        int target = arr[k-1];
        int counter=0;

        for(int i=0; i<n;i++)
        {
            if(target<=arr[i])
            {
                counter++;
            }
            else
                break;
        }
        cout<<counter<<endl;
    }
}

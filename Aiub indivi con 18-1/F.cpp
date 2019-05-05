#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int counter=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        {
            break;
        }
        else
        {
            if(arr[i-1]<arr[i] && arr[i+1]<arr[i])
            {
                counter++;
            }
            else if(arr[i-1]>arr[i] && arr[i+1]>arr[i])
            {
                counter++;
            }
        }
    }
    cout<<counter<<endl;
}

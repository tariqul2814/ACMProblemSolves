#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low=0,high=n-1;
    int counter=0;
    while(1)
    {
        if(high<low || low>high)
        {
            break;
        }
        if(arr[high]>m && arr[low]>m)
        {
            break;
        }
        else
        {
            if(arr[high]<=m)
            {
                counter++;
                high--;
            }
            else if(arr[low]<=m)
            {
                counter++;
                low++;
            }
        }
    }
    cout<<counter<<endl;
}

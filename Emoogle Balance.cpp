#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int recorder=0;
    while(cin>>n)
    {
        if(n==0)
            break;
            int counter=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        int f;
        f=n-counter;
        cout<<"Case "<<recorder+1<<": "<<f-counter<<endl;
        recorder++;
    }
    return 0;
}

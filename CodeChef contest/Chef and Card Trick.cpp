#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        long long int arr[n];
        for(int a=0;a<n;a++)
        {
            cin>>arr[a];
        }
        long long int first=arr[0],last=arr[0];
        int round=0;
        int counter=0;
        int counter1=1;
        for(int a=1;a<n;a++)
        {
            if(arr[a]>arr[a-1] && round==0)
            {
                counter1++;
                last = arr[a];
                continue;
            }
            else
            {
                round=1;
            }

            if(arr[a]>=first && arr[a]<=last)
            {
                counter=1;
                break;
            }
            else if(arr[a]>last)
            {
                counter=1;
                break;
            }

        }
        if(counter==1 || counter1>0)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

    }
}

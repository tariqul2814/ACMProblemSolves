#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int p;

    cin>>p;

    for(int i=0;i<p;i++)
    {
        int m;
        cin>>m;

        int first, last, mid;

        first = 0, last = n-1;

        mid = (first+last)/2;

        int check = -1;

        while(first<=last)
        {
            mid = (first+last)/2;
            if(arr[mid]>check && arr[mid]<m)
            {
                check = arr[mid];
                first = mid+1;
            }
            else if(arr[mid]>=m)
            {
                last = mid - 1;
            }
            else if(arr[mid]<m)
            {
                first = mid + 1;
            }
        }

       // cout<<check<<endl;


        first = 0, last = n-1;

        mid = (first+last)/2;

        int check1 = -1;

        while(first<=last)
        {
            mid = (first+last)/2;
            if(arr[mid]>m)
            {
                check1 = arr[mid];
                last = mid - 1;
            }
            else if(arr[mid]<m)
            {
                first = mid + 1;
            }
            else
                first = mid + 1;
        }

        //cout<<check1<<endl;

        if(check == -1)
            cout<<"X ";
        else
            cout<<check<<" ";

        if(check1 == -1)
            cout<<"X"<<endl;
        else
            cout<<check1<<endl;

    }
}

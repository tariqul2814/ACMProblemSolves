#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int arr[3];
        for(int j=0; j<3; j++)
        {
            cin>>arr[j];
        }

        cout<<"Data set #"<<i+1<<":"<<endl;
        cout<<"   Original order: ";

        for(int j=0; j<3; j++)
        {
            if(j==2)
            {
                cout<<arr[j]<<endl;
                break;
            }

            cout<<arr[j]<<" ";
        }
        sort(arr,arr+3);

        cout<<"   Smallest to largest: ";
        for(int j=0; j<3; j++)
        {
            if(j==2)
            {
                cout<<arr[j]<<endl;
                cout<<endl;
                break;
            }

            cout<<arr[j]<<" ";
        }
    }
    return 0;
}

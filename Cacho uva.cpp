#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int arr[5];
        for(int j=0;j<5;j++)
        {
            cin>>arr[j];
        }
        int record = arr[0];
        int counter=0;
        for(int j=1;j<5;j++)
        {
            if(record+1==arr[j])
            {
                record=arr[j];
                continue;
            }
            else
            {
                counter=1;
                break;
            }
        }
        if(counter==1)
        {
            cout<<"N"<<endl;
        }
        else
            cout<<"Y"<<endl;
    }
}

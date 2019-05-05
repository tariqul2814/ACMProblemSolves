#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;

    for(int i=0;i<t;i++)
    {
        int sizen;
        cin>>sizen;
        int arr[sizen];
        int total=0;
        for(int i=0;i<sizen;i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
                total+=arr[i];
        }
        cout<<"Case "<<i+1<<": "<<total<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        cin.ignore();
        string arr[m];
        int arr1[m];
        for(int j=0;j<m;j++)
        {
            cin>>arr[j];
            cin>>arr1[j];
        }

        int D,D1;
        cin>>D;
        string H;
        cin.ignore();
        getline(cin,H);
        int counter=0;
        for(int hh=0;hh<m;hh++)
        {
            if(arr[hh]==H)
            {
                counter=1;
                D1=arr1[hh];
                break;
            }
        }
        if(counter==1)
        {
            if(D1<=D)
            {
                cout<<"Case "<<i+1<<": Yesss"<<endl;
            }
            else if(D1>D && D1<=D+5)
            {
                cout<<"Case "<<i+1<<": Late"<<endl;
            }
            else
                cout<<"Case "<<i+1<<": Do your own homework!"<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": Do your own homework!"<<endl;
        }
    }
    return 0;
}

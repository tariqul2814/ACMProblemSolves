#include <bits/stdc++.h>
using namespace std;
int arr[3654];
int main()
{
    int t,days,party;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        memset(arr,0,sizeof arr);
        for(int i=7; i<=3654; i=i+7)
        {
            arr[i-2]=-1;
            arr[i-1]=-1;
        }
        int counter;
        counter=0;
        cin>>days>>party;
        int arr2[party];
        for(int j=0; j<party; j++)
        {
            int partyday;
            cin>>partyday;
            arr2[j]=partyday;
        }

        for(int j=0; j<party; j++)
        {
            int n;
            n=arr2[j];
            for(int k=n;k<=days;k=k+n)
            {
                if(arr[k-1]==0)
                {
                    arr[k-1]=1;
                    counter++;
                }
            }

        }
        cout<<counter<<endl;

    }


    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,localcounter=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        int counter=0;
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
            {
                counter++;
            }
        }
        if(counter>=2)
        {
            localcounter++;
        }
    }
    cout<<localcounter<<endl;
}

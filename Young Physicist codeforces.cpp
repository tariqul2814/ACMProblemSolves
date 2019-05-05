#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][3];
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
    }
    if(sum==0)
        cout<<"YES"<<endl;
    else

    return 0;
}

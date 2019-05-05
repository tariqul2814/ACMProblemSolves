#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,m;
    cin>>n;
    l=m=0;
    int sum;
    int arr[4];
    int arr1[4]= {1,3,10,-5};
    int arr2[n];
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=0; j<4; j++)
            cin>>arr[j];
        for(int j=0;j<4;j++)
        {
            sum+=arr[j]*arr1[j];
        }
        if(i==0)
            m=l=sum;
        if(sum<0)
        {
            cout<<"Player "<<i+1<<": "<<0<<endl;
            arr2[i]=sum;
            if(l<sum)
                l=sum;

        }

        else
        {
            cout<<"Player "<<i+1<<": "<<sum<<endl;
            arr2[i]=sum;
            if(l<sum)
                l=sum;

        }


    }

    cout<<"High Score = "<<l<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int arr[n];
        int arr1[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int result =0;
        for(int i=0;i<n;i++)
        {
            result += arr[i];

            if(result<0)
            {
                result = 0;
            }
            //cout<<result<<endl;
            arr1[i]=result;

        }
        sort(arr1,arr1+n);
        if(arr1[n-1]>0)
        {
            cout<<"The maximum winning streak is "<<arr1[n-1]<<"."<<endl;
        }
        else
        {
            cout<<"Losing streak."<<endl;
        }
    }
}

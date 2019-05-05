#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin>>a;
    long long int arr[a];
    for(long long int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+a);
    long long int possame=0,pos=0,negsame=0,neg=0,counter=0;
    long long int reco;

    reco=-5;
    for(long long int i=0; i<a; i++)
    {
        if(arr[i]==0)
            continue;
        else if(reco!=arr[i])
        {
            reco=arr[i];
            counter++;
        }
    }

    cout<<counter<<endl;

}

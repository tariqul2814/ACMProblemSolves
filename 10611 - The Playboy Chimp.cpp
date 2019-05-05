#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,j;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
        cin>>arr[i];
    cin>>b;
    int arr1[b];
    for(int i=0;i<b;i++)
        cin>>arr1[i];
    sort(arr,arr+a);
    //sort(arr1,arr1+b);
    for(int i=0;i<b;i++)
    {
        int k,beg,e;
        beg=0;
        e=a-1;
        k=a-1;
        k=k/2;
        while(arr[k]!=arr1[i] && beg<=e)
        {
            if(arr1[i]>arr[k])
            {
                beg=k+1;
                k=(beg+e)/2;
            }
            else if(arr1[i]<arr[k])
            {
                e=k-1;
                k=(beg+e)/2;
            }
        }

        cout<<k<<endl;
    }

}


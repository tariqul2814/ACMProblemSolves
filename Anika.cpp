#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        int n;
        int happy=0,unhappy=0,checker=0,checker1=-1;

        cin>>n;
        int arr[n];
        int arr1[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=1; i<n; i++)
        {
            if(arr[i-1]<arr[i])
            {
                happy++;
            }
            else if(arr[i-1]>arr[i])
            {
                unhappy++;
            }
        }

        if(unhappy==0 && happy==0)
        {
            cout<<"neutral"<<endl;
        }
        else if(happy==unhappy)
        {
            for(int i=1; i<n; i++)
            {
                if((arr[i-1]<arr[i]) && (arr[i+1]<arr[i]))
                {
                    checker1++;
                    checker=1;
                    arr1[checker1]=i;
                }
            }
            if(checker==1)
            {
                int arr3[checker1];
                for(int i=0;i<checker1;i++)
                {
                    int a;
                    a=arr1[i];
                    a++;
                    arr1[i]=a;
                    arr3[i]=abs(arr1[i]-arr1[i+1]);

                }
                sort(arr3,arr3+checker1);
                checker1--;
                cout<<arr3[checker1]<<endl;
            }
            else
            {
                cout<<"none"<<endl;
            }
        }
        else if(happy>unhappy)
        {
            cout<<"allGoodDays"<<endl;
        }
        else if(unhappy>happy)
        {
            cout<<"allBadDays"<<endl;
        }
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10] = {30, 50, 10, 20, 80, 22, 70, 9, 2, 3};

    int arr1[100];
    memset(arr1, 0, sizeof(arr1));


    for(int i=0; i<10; i++)
    {
        arr1[arr[i]]++;
    }

    for(int i=1; i<100; i++)
    {
        arr1[i]+=arr1[i-1];
    }

    int sortedarray[10];

    for(int i=0; i<10; i++)
    {
        int x = arr1[arr[i]];
        sortedarray[x] = arr[i];
        arr1[arr[i]]--;
    }

    cout<<"Enter"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<sortedarray[i]<<endl;
    }

}

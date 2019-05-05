#include <bits/stdc++.h>
using namespace std;

void check(int a)
{
    int b;
    b=a;
    int no=0;
    while(a!=0)
    {
        no++;
        a=a/10;
    }

    if(no==1)
        cout<<"    ";
    else if(no==2)
        cout<<"   ";
    else if(no==3)
        cout<<"  ";
    else if(no==4)
        cout<<" ";
    else if(no==5)
        cout<<"";
}
int main()
{
    int n;
    int arr[101];
    int arr1[101];
    int flag=-1;
    while(cin>>n)
    {
        int sum=0;
        if(n==0)
        {
            break;
        }
        flag++;
        arr1[flag]=n;
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        arr[flag]=sum;

    }
    cout<<"PERFECTION OUTPUT"<<endl;
    for(int i=0;i<=flag;i++)
    {
        check(arr1[i]);
        if(arr[i]==arr1[i])
            cout<<arr1[i]<<"  PERFECT"<<endl;
        else if(arr[i]<arr1[i])
            cout<<arr1[i]<<"  DEFICIENT"<<endl;
        else if(arr[i]>arr1[i])
            cout<<arr1[i]<<"  ABUNDANT"<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;
}

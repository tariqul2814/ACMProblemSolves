#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr1[n];
    cin.ignore();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        string a;
        a=arr1[i];
        if(a[0]=='O' && a[1]=='O')
        {
            flag=1;
            a[0]='+';
            a[1]='+';
            arr1[i]=a;
            break;
        }
        else if(a[3]=='O' && a[4]=='O')
        {
            a[3]='+';
            a[4]='+';
            flag=1;
            arr1[i]=a;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr1[i]<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

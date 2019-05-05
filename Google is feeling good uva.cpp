#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int counter;
    counter=n*10;
    string g[counter];
    int arr[counter];
    for(int i=0;i<counter;i++)
    {
        cin>>g[i];
        cin>>arr[i];
    }
    int counter1=10;
    int counter2=0;
    for(int i=0;i<n;i++)
    {
        int l=0;
        for(int j=counter2;j<counter1;j++)
        {
            if(l<arr[j])
                l=arr[j];
        }

        cout<<"Case #"<<i+1<<":"<<endl;
        for(int f=counter2;f<counter1;f++)
        {
            if(l==arr[f])
            {
                cout<<g[f]<<endl;
            }
        }
        counter2=counter1;
        counter1+=10;
    }
    return 0;

}

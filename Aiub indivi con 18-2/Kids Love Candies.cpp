#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;

    cin>>a>>b;

    int arr[a];

    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    int sum = 0;

    for(int i=0;i<a;i++)
    {
        sum+=(arr[i]/b);
    }

    cout<<sum<<endl;
}

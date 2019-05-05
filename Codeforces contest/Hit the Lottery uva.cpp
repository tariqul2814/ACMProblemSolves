#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,counter=0,i=4;
    cin>>n;
    m=n;
    long long int arr[5]={1,5,10,20,100};
    while(n!=0)
    {
        if(arr[i]<=n)
        {
            n=n-arr[i];
            counter++;
            continue;
        }
        else
        {
            i--;
        }
    }
    cout<<counter<<endl;
}

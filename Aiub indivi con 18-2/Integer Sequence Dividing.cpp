#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;

    long long int sum = 0;

    sum = (n*(1+n))/2;

    //cout<<sum<<endl;

    if(sum%2==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<sum%2<<endl;
    }

    return 0;

}

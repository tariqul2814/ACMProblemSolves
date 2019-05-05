#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long p,n;
    while(cin>>n)
    {
        if(n<0)
            break;
        else
        {
            p=n*(n+1)/2+1;
            cout<<p<<endl;
        }
    }
    return 0;
}

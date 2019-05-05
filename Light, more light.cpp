#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long double a;
    while(cin>>n)
    {
        if(n==0)
            break;
        a=(sqrt((long double)(n)));
        long long int x = a;
        if(n==(x*x))
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}

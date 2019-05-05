#include <bits/stdc++.h>
using namespace std;
double pi = 2*acos(0.0);
double fn(double x)
{
    return x*pi/180.00;
}

int main()
{
    long double a,ans,ans1;
    while(cin>>a)
    {
        cout<<fixed;
        cout<<setprecision(10)<<(((sin(fn(108)))/(sin(fn(63))))*a)<<endl;
    }
    return 0;
}

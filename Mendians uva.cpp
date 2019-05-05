#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    double s,area;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2.0;
        area = (4.0/3.0) * sqrt(s * (s-a) * (s-b) * (s-c));

        cout<<fixed;
        if(area>0.0)
            cout<<setprecision(3)<<area<<endl;
        else
            cout<<"-1.000"<<endl;
    }
}

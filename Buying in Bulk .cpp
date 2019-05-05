#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int c,p,c1,p1;
        cin>>c>>p;
        if(c>1)
        {
            c1=c-1;
            c1*=2;
            p1=c*p;
            p1-=c1;
            cout<<c<<" "<<p<<endl;
            cout<<p1<<endl;
        }
        else
        {
            cout<<c<<" "<<p<<endl;
            cout<<p<<endl;
        }
    }
    return 0;
}

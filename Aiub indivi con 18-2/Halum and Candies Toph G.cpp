#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int x,y,z;
        x = a;
        y=b;
        z=c;
        int amount=0;
        int rec=0;
        if(z<y)
        {
            amount+=(y-(z-1));
            y = z-1;
        }
        else if(z==y || y<1 || z<1)
        {
            rec=-1;
        }
        if(y<x)
        {
            amount+=(x-(y-1));
            x = y-1;
        }
        else if(x==y || y<1 || x<1)
        {
            rec = -1;
        }

        if(x<1 || y<1 || z<1 || x==y || y==z)
        {
            rec=-1;
        }

        if(rec==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<amount<<endl;
        }
    }
}

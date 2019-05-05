#include <bits/stdc++.h>
using namespace std;
void recursion(long long int a)
{
    if(a==0)
        return;
    int x=a%16;
    a=a/16;
    recursion(a);
    switch (x)
    {
    case 10:
        cout<<"A";
        break;
    case 11:
        cout<<"B";
        break;
    case 12:
        cout<<"C";
        break;
    case 13:
        cout<<"D";
        break;
    case 14:
        cout<<"E";
        break;
    case 15:
        cout<<"F";
        break;
    default:
        cout<<x;
    }

}
int main()
{
    string n;
    while(cin>>n)
    {
        long long int a,p,s,y,var;
        long double x;
        s=0;
        if(n[0]=='-')
            break;
        if(n[0]=='0' && n[1]=='x')
        {
            s=2;
            a=0;
            p=n.size();
            y=p;
            y=y-3;
            var=0;
            while(p!=s)
            {
                x=n[s];
                int q;
                q=(int)x;
                switch(q)
                {
                case 65:
                    x=10;
                    break;
                case 66:
                    x=11;
                    break;
                case 67:
                    x=12;
                    break;
                case 68:
                    x=13;
                    break;
                case 69:
                    x=14;
                    break;
                case 70:
                    x=15;
                    break;
                case 71:
                    x=16;
                    break;
                default:
                    x=x-48;
                    break;
                }
                x*=pow(16,y);
                y--;
                var+=(long long int)x;
                s++;
            }
            cout<<var<<endl;

        }
        else
        {
            var=0;
            s=0;
            p=n.size();
            while(s!=p)
            {
                y=n[s];
                y=y-48;
                var+=y;
                var=var*10;
                s++;
            }
            var/=10;
            cout<<"0x";
            recursion(var);
            cout<<endl;

        }
    }
}

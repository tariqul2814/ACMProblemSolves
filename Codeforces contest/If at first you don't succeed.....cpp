#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,k,l;
    cin>>a>>b>>c>>n;

    k=a-c;
    l=b-c;
    if(a<c || b<c)
    {
        cout<<-1<<endl;
    }
    else if((k+l+c)<n)
    {
        cout<<n-(k+l+c)<<endl;
    }
    else
        cout<<-1<<endl;
}

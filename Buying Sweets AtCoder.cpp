#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,m,n;
    cin>>x>>m>>n;
    x=x-m;
    int counter,rec;
    counter=x/n;
    rec=counter*n;
    cout<<x-rec<<endl;
}

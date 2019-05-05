#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int counter=0;
    getline(cin,a);
    int sizen=a.size();
    for(int i=0;i<sizen;i++)
    {
        if(a[i]=='1')
            counter++;
    }
    cout<<counter<<endl;
}

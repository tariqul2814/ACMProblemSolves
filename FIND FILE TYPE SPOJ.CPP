#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n];
    string p[m];
    map <string,string>mymap;

    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    for(int i=0;i<m;i++)
    {
        getline(cin,p[i]);
    }

    for(int i=0;i<n;i++)
    {
        string x,h;
        int j=0;
        x=s[i];
        while(x[j]!=' ')
        {
            h+=x[j];
            j++;
        }
        mymap.insert (pair<string,string>(h,x));
    }

    for(map<string,string>::iterator it = mymap.begin();  it!=mymap.end() ;it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}

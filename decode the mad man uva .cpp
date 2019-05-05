#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name="qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string e;
    getline(cin,e);
    int n=e.size();
    int m=name.size();
    for(int i=0; i<n; i++)
    {
        if(e[i]>=65 && e[i]<=90)
        {
            int s=e[i];
            s+=32;
            e[i]=s;
        }
        if(e[i]==' ' && e[i]=='\n')
            continue;

        for(int j=0; j<m; j++)
        {
            if(e[i]==name[j])
            {
                e[i]=name[j-2];
                break;
            }
        }
    }
    cout<<e<<endl;

}

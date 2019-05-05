#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>mp;
    string n;
    while(getline(cin,n))
    {
        int counter1=0;
        int s;
        s=n.size();
        for(int i=0; i<s; i++)
        {
            int l;
            int counter;
            counter=0;
            counter1=0;
            l=0;
            string p;
            if(n[i]==' ')
                continue;
            while(n[i]!=' ')
            {
                if(i>=s)
                {
                    counter=1;
                    break;
                }

                if(n[i]=='-' || (n[i]>=65 && n[i]<=90) || (n[i]>=97 && n[i]<=122) )
                {
                    p+=n[i];
                    l++;
                }

                i++;
            }
            if(p=="E-N-D")
            {
                counter1=1;
                break;
            }

            if(counter==1)
            {
                mp.insert( pair<int,string>(l,p) );
                break;
            }

            mp.insert( pair<int,string>(l,p) );
        }
        if(counter1==1)
            break;

    }
    map<int,string>:: iterator it = mp.end();
    --it;
    string v;
    v=it->second;
    int u;
    u=v.size();
    for(int i=0;i<u;i++)
    {
        if(v[i]>=65 && v[i]<=90)
        {
            v[i]+=32;
        }
    }
    cout<<v<<endl;
    return 0;
}

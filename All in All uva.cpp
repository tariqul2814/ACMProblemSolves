#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n,m;
    int counter;
    while(cin>>n>>m)
    {
        int j=0;
        for(int i=0; i<n.size(); i++)
        {
            counter=0;
            for(; j<m.size(); j++)
            {
                if(n[i]==m[j])
                {
                    m[j]=' ';
                    counter=1;
                    break;
                }
            }
            if(counter==0)
                break;
        }
        if(counter==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

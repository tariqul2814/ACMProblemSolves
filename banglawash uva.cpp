#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        getchar();
        int x;
        int draw=0,abdn=0,bang=0,world=0;
        cin>>x;
        getchar();
        string s;
        cin>>s;
        for(int j=0;j<x;j++)
        {
            if(s[j]=='B')
                bang++;
            else if(s[j]=='W')
                world++;
            else if(s[j]=='A')
                abdn++;
            else if(s[j]=='T')
                draw++;
        }
        if(abdn==x)
            cout<<"Case "<<i+1<<": "<<"ABANDONED"<<endl;

        else if(bang==world)
            cout<<"Case "<<i+1<<": "<<"DRAW "<<bang<<" "<<draw<<endl;

        else if(world==0 && draw==0)
        {
            cout<<"Case "<<i+1<<": "<<"BANGLAWASH"<<endl;
        }

        else if(bang==0 && draw==0)
        {
            cout<<"Case "<<i+1<<": "<<"WHITEWASH"<<endl;
        }
        else if(bang>world)
            cout<<"Case "<<i+1<<": "<<"BANGLADESH "<<bang<<" - "<<world<<endl;

        else if(world>bang)
            cout<<"Case "<<i+1<<": "<<"WWW "<<world<<" - "<<bang<<endl;

    }

    return 0;
}

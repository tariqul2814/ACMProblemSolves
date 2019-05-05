#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    while(getline(cin,n))
    {
        string s;
        int x,p;
        x=n.size();
        int i=0,j=0;
        while(i!=x)
        {
            if(n[i]=='A' || n[i]=='B' || n[i]=='C')
            {
                s+=50;
            }
            else if(n[i]=='D' || n[i]=='E' || n[i]=='F')
            {
                s+=51;
            }

            else if(n[i]=='G' || n[i]=='H' || n[i]=='I')
            {
                s+=52;
            }

            else if(n[i]=='J' || n[i]=='K' || n[i]=='L')
            {
                s+=53;
            }
            else if(n[i]=='M' || n[i]=='N' || n[i]=='O')
            {
                s+=54;
            }
            else if(n[i]=='P' || n[i]=='Q' || n[i]=='R' || n[i]=='S')
            {
                s+=55;

            }
            else if(n[i]=='T' || n[i]=='U' || n[i]=='V')
            {
                s+=56;

            }
            else if(n[i]=='W' || n[i]=='X' || n[i]=='Y' || n[i]=='Z')
            {
                s+=57;
            }
            else if(n[i]=='1' || n[i]=='0'|| n[i]=='-')
            {
                s+=n[i];
            }

            i++;

        }
        cout<<s<<endl;
    }

}

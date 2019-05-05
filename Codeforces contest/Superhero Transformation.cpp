#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n,m;

    getline(cin,n);

    getline(cin,m);

    int counter = 0;

    if(n.size()==m.size())
    {
        int sizen = m.size();

        for(int i=0;i<sizen;i++)
        {
            if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' || n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U')
            {
                if(m[i]=='a' || m[i]=='e' || m[i]=='i' || m[i]=='o' || m[i]=='u' || m[i]=='A' || m[i]=='E' || m[i]=='I' || m[i]=='O' || m[i]=='U')
                {
                    continue;
                }

                else
                {
                    counter = 1;
                    break;
                }
            }

            else
            {
                if(m[i]=='a' || m[i]=='e' || m[i]=='i' || m[i]=='o' || m[i]=='u' || m[i]=='A' || m[i]=='E' || m[i]=='I' || m[i]=='O' || m[i]=='U')
                {
                    counter = 1;
                    break;
                }

                else
                {
                    continue;
                }
            }
        }

        if(counter==0)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    else
        cout<<"No"<<endl;

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    int sizen = n.size();
    int counter=0;
    for(int i=0;i<sizen;i++)
    {
        if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u')
        {
            continue;
        }
        else if(n[i]=='n')
        {
            continue;
        }
        else
        {
            if(n[i+1]=='a' && i+1<sizen || n[i+1]=='e' && i+1<sizen || n[i+1]=='i' && i+1<sizen || n[i+1]=='o' && i+1<sizen || n[i+1]=='u' && i+1<sizen)
            {
                continue;
            }
            else
            {
                counter=1;
                break;
            }
        }
    }
    if(counter==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

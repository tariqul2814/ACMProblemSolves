#include <bits/stdc++.h>
using namespace std;
string n;
void dec(int k)
{
    for(int i=k;i<n.size;i++)
    {
        n[i]=
    }
}
int main()
{
    cin>>n;
    int counter=0;
    while(counter!=1)
    {
        string p;
        int s=n.size();
        for(int i=0;i<s;i++)
        {
            if(n[i]==n[i+1])
            {
                i=i+2;
                counter=1;
            }
            else
            {
                p+=n[i];
                counter=0;
            }
        }
    }
}

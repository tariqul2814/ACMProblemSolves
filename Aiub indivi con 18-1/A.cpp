#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n,f,b;
    getline(cin,n);
    long long int x = n.size();
    int h=0,y=0;
    char h1,y1;
    getline(cin,f);
    getline(cin,b);
    long long int forwards=0,backwards=0,both1,fantacy1=0,sleep1f=0,sleep2f=0;
    h1 = f[0];
    y1= b[0];
    int i=0;
    for(i=0;i<x;i++)
    {
        if(forwards!=0)
            break;
        int recorder=0;
        if(h1==n[i])
        {
            recorder=i;
            int round=0,j=0,recor=f.size();
            for(j=0;j<recor;j++)
            {
                if(n[recorder]==f[j])
                {
                    round++;
                    recorder++;
                }
                else
                    break;
            }
            if(round==recor)
            {
               forwards++;
               sleep1f++;
               i=recorder;
               break;
            }
            else
            {

            }
        }
    }
    for(;i<x;i++)
    {
        if(backwards!=0)
            break;
        int recorder=0;
        if(y1==n[i])
        {
            recorder=i;
            int round=0,j=0,recor=b.size();
            for(j=0;j<recor;j++)
            {
                if(n[recorder]==b[j])
                {
                    round++;
                    recorder++;
                }
                else
                    break;
            }
            if(round==recor)
            {
               sleep1f++;
               backwards++;
               i=recorder;
               break;
            }
            else
            {

            }
        }
    }
    forwards=0,backwards=0,i=0;
    int aa,bb;
    aa=f.size();
    bb=b.size();
    aa--;
    bb--;
    for(i=x-1;i>=0;i--)
    {
        if(forwards!=0)
            break;
        int recorder=0;
        if(h1==n[i])
        {
            recorder=i;
            int round=0,j=0,recor=f.size();
            for(j=0;j<recor;j++)
            {
                if(n[recorder]==f[j])
                {
                    round++;
                    recorder--;
                }
                else
                    break;
            }
            if(round==recor)
            {
               forwards++;
               sleep2f++;
               i=recorder;
               break;
            }
        }
    }
    for(;i>=0;i--)
    {
        if(backwards!=0)
            break;
        int recorder=0;
        if(y1==n[i])
        {
            recorder=i;
            int round=0,j=0,recor=b.size();
            for(j=0;j<recor;j++)
            {
                if(n[recorder]==b[j])
                {
                    round++;
                    recorder--;
                }
                else
                    break;

            }
            if(round==recor)
            {
               sleep2f++;
               backwards++;
               break;
            }
        }
    }

    if(sleep1f==2 && sleep2f==2)
    {
        cout<<"both"<<endl;
    }
    else if(sleep1f==2)
    {
        cout<<"forward"<<endl;
    }
    else if(sleep2f==2)
    {
        cout<<"backward"<<endl;
    }
    else
    {
        cout<<"fantasy"<<endl;
    }
    return 0;
}

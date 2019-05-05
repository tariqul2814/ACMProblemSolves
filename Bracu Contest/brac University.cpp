#include <bits/stdc++.h>
using namespace std;

bool checker(string n)
{
    int p;
    p=n.size();

    for(int i=0;i<p-1;i++)
    {
        for(int j=i+1;j<p;j++)
        {
            if(n[j]=='X')
                continue;
            if(n[i]==n[j])
            {
                return false;
            }
            else
                break;
        }
    }
    return true;
}
int main()
{
    string n;
    getline(cin,n);
    int sizen=n.size();
    int counter=0,counter1=0;

    while(1)
    {
        if(counter!=0)
            break;
        for(int i=0; i<sizen-1; i++)
        {
            if(n[i]=='X')
                continue;
            for(int j=i+1; j<sizen; j++)
            {
                if(n[j]=='X')
                    continue;
                else
                {
                    if(n[i]==n[j])
                    {
                        n[i]='X';
                        n[j]='X';
                        break;
                    }
                    else if(n[i]!=n[j])
                        break;
                }
            }
        }
        if(checker(n)==true)
        {
            counter=1;
        }
        else
        {
            continue;
        }

    }
    string h;
    int counter2=0;
    for(int i=0;i<sizen;i++)
    {
        if(n[i]!='X')
        {
            h+=n[i];
            counter1=1;
        }
        else
            counter2++;
    }
    if(counter2==sizen)
        cout<<"Empty String"<<endl;
    else
        cout<<h<<endl;

}

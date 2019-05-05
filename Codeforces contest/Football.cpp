#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    getline(cin,n);

    int sizen = n.size();

    int counter = 0;

    for(int i=0;i<sizen;i++)
    {
        char m='-';
        m = n[i];

        int sum = 0;

        while(m==n[i] && i<sizen)
        {
            sum++;
            i++;
        }

        if(sum>=7)
        {
            counter = 1;

            break;
        }
        i--;
    }

    if(counter==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}

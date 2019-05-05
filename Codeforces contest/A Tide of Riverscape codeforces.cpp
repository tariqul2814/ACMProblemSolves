#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,p;
    cin>>m>>p;
    cin.ignore();
    int range = abs(m-p);
    string n;
    cin>>n;
    int size1=n.size();
    int counter=0;
    for(int i=0;i<range;i++)
    {
        int r = i+p;
        if(n[i]==n[r])
        {

            counter++;
        }
    }
    if(counter==range)
    {
        cout<<"No"<<endl;
    }
    else
    {
        for(int i=0;i<size1;i++)
        {
            if(n[i]=='.')
                cout<<0;
            else
                cout<<n[i];
        }
        cout<<endl;
    }

}

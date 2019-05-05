#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string x;
        getline(cin,x);
        int sizen;
        sizen=x.size();
        int sq;
        sq=(int)((double)sqrt(sizen));
        if((sq*sq)==sizen)
        {
            int counter=0;
            char c[sizen][sizen];
            for(int k=0;k<sq;k++)
            {
                for(int j=0;j<sq;j++)
                {
                    c[k][j]=(char)x[counter];
                    counter++;
                }
            }
            for(int k=0;k<sq;k++)
            {
                for(int j=0;j<sq;j++)
                {
                    cout<<c[j][k];
                }
            }
            cout<<endl;

        }
        else
        {
            cout<<"INVALID"<<endl;
        }
    }
}

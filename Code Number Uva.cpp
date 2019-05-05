#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin.ignore();
        string n;
        getline(cin,n);
        int sizen= n.size();
        for(int j=0;j<sizen;j++)
        {
            int m;
            m=n[j];
            if(m>=48 && m<=57)
            {
                switch(m)
                {
                    case 0: cout<<"O";
                    break;
                    case 1: cout<<"I";
                    break;
                    case 2: cout<<"Z";
                    break;
                    case 3: cout<<"E";
                    break;
                    case 4: cout<<"A";
                    break;
                    case 5: cout<<"S";
                    break;
                    case 6: cout<<"G";
                    break;
                    case 7: cout<<"T";
                    break;
                    case 8: cout<<"B";
                    break;
                    case 9: cout<<"P";
                    break;
                }
            }
            else
                cout<<n[j];
        }
    }
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string a[n];
    string a1[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i]);
        getline(cin,a1[i]);
    }
    int x;
    cin>>x;
    cin.ignore();
    for(int i=0;i<x;i++)
    {
        string hh;
        getline(cin,hh);
        for(int j=0;j<n;j++)
        {
            if(a[j]==hh)
            {
                cout<<a1[j]<<endl;
                break;
            }
        }
    }

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string input;
    getline(cin,input);
    for(int i=1;i<=n;i++)
    {
        string h="";
        if(n%i==0)
        {
            for(int j=i-1;j>=0;j--)
            {
                h+=input[j];
            }
            if(i<n)
            {
                for(int j=i;j<n;j++)
                {
                    h+=input[j];
                }
                input=h;
            }
            else
            {
                input=h;
            }
        }
    }
    cout<<input<<endl;
}

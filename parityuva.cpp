#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,s,l;
    while(cin>>n)
    {
        string a;
        if(n==0)
            break;
        l=0;
        while(n!=0)
        {
            m=n%2;
            if(m==1)
            {
                l++;
                a+=49;
            }
            else if(m==0)
                a+=48;
            n=n/2;
        }
        s=a.size();
        cout<<"The parity of ";
        for(int i=s-1;i>=0;i--)
            cout<<a[i];
        cout<<" is "<<l<<" (mod 2)."<<endl;
    }

    return 0;
}

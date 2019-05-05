#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int arr[32];
    int k=1;
    for(int i=0; i<32; i++)
    {
        if(i==0)
            arr[i]=1;
        else
        {
            k=k*2;
            arr[i]=k;
        }
    }

    int n,m;
    while(cin>>n>>m)
    {
        int counter=0;
        string x,z,l;
        while(counter!=32)
        {
            int p;
            p=n%2;
            p+=48;
            x+=p;
            n=n/2;
            p=m%2;
            p+=48;
            z+=p;
            m=m/2;
            counter++;
        }
        counter=0;
        for(int i=31; i>=0; i--)
        {
            int q;
            double w;
            if(x[i]==z[i])
            {
                l+='0';
            }
            else
            {
                l+='1';
                counter+=arr[i];
            }
        }

        cout<<counter<<endl;

    }
    return 0;
}


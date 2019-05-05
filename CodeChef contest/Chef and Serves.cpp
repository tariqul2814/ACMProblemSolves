#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,k,p1,p2;
    cin>>t;
    int counter=0;
    for(long long int i=0;i<t;i++)
    {
        counter=0;
        cin>>p1>>p2>>k;
        long long int total = p1+p2;
        int local=0;

        for(long long int j=0;j<=total;j=j+k)
        {
                if(j==0)
                    continue;
                if(counter==0)
                    counter=1;
                else if(counter==1)
                    counter=0;

        }
        if(counter==0)
            cout<<"CHEF"<<endl;
        else
            cout<<"COOK"<<endl;
    }
}

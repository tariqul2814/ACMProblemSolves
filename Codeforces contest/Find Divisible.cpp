#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    long long int l,r;

    for(int i=0;i<t;i++)
    {
        cin>>l;
        cin>>r;

        for(long long int j=l;j<=r;j++)
        {

            int counter=0;
            int rec = 2;
            for(long long int k=j*rec;k<=r;k=j*rec)
            {
                if((k%j)==0 && k!=j)
                {
                    counter=1;
                    cout<<j<<" "<<k<<endl;
                    break;
                }
                rec++;

            }
            if(counter==1)
                break;
        }
    }
}

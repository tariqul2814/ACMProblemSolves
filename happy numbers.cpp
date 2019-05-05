#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m;
    int k;
    cin>>k;
    for(int i=0; i<k; i++)
    {
        cin>>n;
        m=n;
        while(m>=1)
        {
            int s=m;
            int s1;
            m=0;
            while(s!=0)
            {
                s1=s%10;
                s1=s1*s1;
                m+=s1;
                s=s/10;
            }

            if(m==1)
            {
                cout<<"Case #"<<i+1<<": "<<n<<" is a Happy number."<<endl;
                break;
            }
            else if(m>=2 && m<=9)
            {
                cout<<"Case #"<<i+1<<": "<<n<<" is an Unhappy number."<<endl;
                break;
            }

        }
    }
}

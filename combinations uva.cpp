#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,ans,ans2,ans1,rec1,rec2,rec3,result;
    while(cin>>n>>m)
    {
        rec1=1;
        rec2=1;
        rec3=1;
        if(n==0 && m==0)
            break;
        ans=n-m;
        if(ans==0)
        {
            rec2=1;
            rec3=1;
            rec1=1;
            rec2 = rec2 * rec3;
            ans=rec1/rec2;
            cout<<n<<" things taken "<<m<<" at a time is "<<ans<<" exactly."<<endl;
        }

        else if(ans>=m)
        {
            int hh=1;
            rec3=1;
            for(int i=ans+1;i<=n;i++)
            {
                rec3*=i;
                if(rec3%hh==0 && hh<=100)
                {
                    rec3=rec3/hh;
                    hh++;
                }
            }

            cout<<n<<" things taken "<<m<<" at a time is "<<rec3<<" exactly."<<endl;
        }
        else if(ans<m)
        {
            int hh=1;
            rec3=1;
            for(int i=m+1;i<=n;i++)
            {
                rec3*=i;
                if(rec3%hh==0 && hh<=100)
                {
                    rec3=rec3/hh;
                    hh++;
                }
            }

            cout<<n<<" things taken "<<m<<" at a time is "<<rec3<<" exactly."<<endl;
        }
    }


    return 0;
}

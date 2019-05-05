#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    while(getline(cin,n))
    {
        if(n=="0")
            break;
        long long int s,ans2=0,Ans=0,ans1,i=1;
        long double ans;
        s=n.size();
        for(int j=(s-1);j>=0;j--)
        {
            ans1=n[j];
            ans1=ans1-48;
            ans=pow(2,i);
            i++;
            ans-=1;
            ans1=ans1*ans;
            Ans+=ans1;
        }

        cout<<Ans<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,c;
     while(cin>>c)
     {
         a=1,b=6;
         long long int ans=0,d,h;
         if(c<3)
         {
             cout<<0<<endl;
             continue;
         }

         for(long long int i=3;i<=c;i+=2)
         {
             a=b+a;
             b+=4;
         }

         ans+=a;
         a=a-2;
         ans+=a;
         a=a-2;
         ans+=a;
         printf("%lld\n",ans);
     }

}

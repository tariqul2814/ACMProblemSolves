#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int k=0;k<t;k++)
   {
       int m,n;
       long long int counter=0;
       cin>>m>>n;
       int div=sqrt(m);
       for(int i=1;i<=div;i++)
       {
           int x=m/i;
           if(m%i==0 && i%n!=0)
           {
               counter+=i;
           }
           if(m%x==0 && x%n!=0 && i!=x)
           {
               counter+=x;
           }
           else
            continue;
       }
       cout<<counter<<endl;
   }


}


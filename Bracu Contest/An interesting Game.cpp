#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,j,t,a,s,d;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      long long int sum,sum1,sum2;
      cin>>n>>m>>j;
      sum=(n*(n+1))/2;
      a=m-1;
      s=a+j;
      d=j-1;
      if(d!=0)
      {
      sum1=(d*(d+1)/2);
      sum2=(s*(s+1)/2);
      sum2=sum2-sum1;
      sum=abs(sum-sum2);
      cout<<"Case "<<i+1<<": "<<sum<<endl;
      }
      else
      {
      sum1=0;
      sum2=(s*(s+1)/2);
      sum2=sum2-sum1;
      sum=sum-sum2;
      cout<<"Case "<<i+1<<": "<<sum<<endl;
      }
  }
    return 0;

}

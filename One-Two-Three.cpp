#include <bits/stdc++.h>
using namespace std;
int main( )
{
  int n;
  scanf("%d",&n);
  cin.ignore();
  for(int i=0;i<n;i++)
  {
      string x;
      getline(cin,x);
      int y;
      y=x.size();
      if(y==3)
      {
          if((x[0]=='t' && x[2]=='o') || (x[0]=='t' && x[1]=='w') || (x[1]=='w' && x[2]=='o'))
          {
              cout<<2<<endl;
          }
          else
          {
              cout<<1<<endl;
          }
      }

      else if(y==5)
      {
          cout<<3<<endl;
      }
  }

}

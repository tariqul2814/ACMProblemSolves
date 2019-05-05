#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    while(getline(cin,x))
    {
        string y;
        int strt=0,finish;
        int f;
        f=x.size();
        for(int i=0;i<f;i++)
        {
           if(x[i]==' ' || i==(f-1))
           {
               if(i==(f-1))
               {
                 for(int j=i;j>=strt;j--)
                  y+=x[j];
                  continue;
               }
               for(int j=i-1;j>=strt;j--)
                  y+=x[j];
                  y+=" ";
               strt=i+1;
           }
           else
            continue;
        }
        cout<<y<<endl;
    }
}

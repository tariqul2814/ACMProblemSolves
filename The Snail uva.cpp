#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;
        double initial=0,distance=b,per=(d*b)/100,total=b;
        int day=1;
        if(a<b)
            day++;
        while(1)
        {
            if(total>a || total<c)
                break;
            initial+=distance;
            total=initial;
            initial-=c;
            distance-=per;
            if(distance<0)
                distance=0;
            day++;
        }
        if(total>a)
          cout<<"success on day "<<day<<endl;
        else
            cout<<"failure on day "<<day<<endl;
    }

}

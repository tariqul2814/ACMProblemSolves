#include <bits/stdc++.h>
using namespace std;
int main()
{
    int available,total,total1,counter;
    while(cin>>total)
    {
        if(total==0)
            break;
        total1=total;
        total=0;
        while(1)
        {
            if(total1<2)
            {
                break;
            }
            else if(total1==2)
            {
                total1+=1;
                int more;
                more=total1/3;
                total+=more;
                more=more*3;
                total1=abs(total1-more);
            }
            else
            {
                int more;
                more=total1/3;
                total+=more;
                total1+=more;
                more=more*3;
                total1=abs(total1-more);
            }
        }

        cout<<total<<endl;
    }
}

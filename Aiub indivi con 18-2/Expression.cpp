#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int counter=0;
    for(int i=0;i<4;i++)
    {
        int counter1=0,counter2=0,counter3=0,counter4;
        if(i==0)
        {
            counter1=a+b*c;
            counter2=a*b+c;
            counter3=a+b+c;
            counter4=a*b*c;
            counter1=max(counter1,counter2);
            counter1=max(counter1,counter3);
            counter1=max(counter1,counter4);
        }
        else if(i==1)
        {
            counter1=a*(b+c);
            counter2=a+(b*c);
            counter3=a+(b+c);
            counter4=a*(b*c);
            counter1=max(counter1,counter2);
            counter1=max(counter1,counter3);
            counter1=max(counter1,counter4);
        }
        else if(i==2)
        {
            counter1=a*b*c;
            counter2=a+b+c;
            counter3=a+b*c;
            counter4=a*b+c;
            counter1=max(counter1,counter2);
            counter1=max(counter1,counter3);
            counter1=max(counter1,counter4);
        }
        else if(i==3)
        {
            counter1=(a+b)*c;
            counter2=(a*b)+c;
            counter3=(a*b)*c;
            counter4=(a+b)+c;
            counter1=max(counter1,counter2);
            counter1=max(counter1,counter3);
            counter1=max(counter1,counter4);
        }
        if(counter<counter1)
        {
            counter=counter1;
        }
    }
    cout<<counter<<endl;
}

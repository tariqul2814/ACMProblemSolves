#include <bits/stdc++.h>
using namespace std;
long long int mul=1;
int main()
{
    long long int n,m;
    int recorder=0,recorder1=0;
    while(cin>>n)
    {
        mul=1;
        recorder1=0,recorder=0;

        if(n==0)
        {
            mul=1;
        }
        else if(n>=1)
        {
            for(long long int i=n;i>=1;i--)
            {
                if(mul>6227020800)
                {
                    recorder=1;
                    break;
                }
                mul=mul*i;

            }
        }
        else if(n<0)
        {
            n=n*-1;
            if(n%2==0)
            {
                mul=1;
            }
            else
            {
               recorder=1;
            }
        }

    if(recorder==1)
    {
        cout<<"Overflow!"<<endl;
    }
    else if(mul<10000)
    {
        cout<<"Underflow!"<<endl;
    }
    else
    {
        cout<<mul<<endl;
    }
}

}

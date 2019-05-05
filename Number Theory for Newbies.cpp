#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    long long int a;
    while(cin>>a)
    {
        long long int record=0,rever,n,g;
        string x,y;
        rever=a;
        while(rever!=0)
        {
            record++;
            n=rever%10;
            n=n+48;
            x+=n;
            rever=rever/10;
        }
        g=x.size();
        n=0;
        rever=0;
        string m;
        for(char h='9'; h>='0'; h--)
        {
            for(int i=0; i<g; i++)
            {
                if(x[i]=='-')
                    continue;
                else if(h==x[i])
                {
                    rever=x[i];
                    rever=rever-48;
                    n+=rever;
                    n=n*10;
                    m+=x[i];
                    x[i]='-';
                }
            }
        }
        y=m;
        n=n/10;
        g=m.size();
        int counter=0,counter1=0;
        string b;
        long long int q=0,o;
        for(char h='0'; h<='9'; h++)
        {

            for(int i=0; i<=g; i++)
            {
                if(m[i]=='-')
                    continue;
                if(counter>0 && counter1==1)
                {
                    for(int j=0; j<counter; j++)
                    {
                        b+=48;
                        o=0;
                        q+=o;
                        q*=10;
                    }
                    counter=0;
                    counter1=2;
                    if(i==g)
                        break;
                }
                if(m[i]=='0')
                {
                    counter++;
                    m[i]='-';
                }
                else if(m[i]==h)
                {
                    b+=h;
                    o=h;
                    o-=48;
                    q+=o;
                    q*=10;
                    m[i]='-';
                    counter1++;
                }
            }
        }
        q=q/10;

        if(n>q)
        {
            long long int div;
            div=n-q;
            div/=9;
            cout<<n<<" - "<<q<<" = "<<n-q<<" = "<<9<<" * "<<div<<endl;
        }
        else
        {
            long long int div;
            div=q-n;
            div/=9;
            cout<<q<<" - "<<n<<" = "<<q-n<<" = "<<9<<" * "<<div<<endl;
        }


    }
}

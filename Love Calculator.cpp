#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int sum,sum1;
    while(getline(cin,a) && getline(cin,b))
    {
        sum=0,sum1=0;
        int k;
        for(int i=0; i<a.size(); i++)
        {

            k=a[i];
            if(k>=65 && k<=90)
            {
                k=k-64;
                sum+=k;
            }
            else if(k>=97 && k<=122)
            {
                k=k-96;
                sum+=k;
            }

        }

        for(int j=0; j<b.size(); j++)
        {
            k=b[j];
            if(k>=65 && k<=90)
            {
                k=k-64;
                sum1+=k;
            }
            else if(k>=97 && k<=122)
            {
                k=k-96;
                sum1+=k;
            }
        }
        int n,m,x,y;
        n=sum,m=sum1;
        sum=0,sum1=0;
        while(1)
        {
            sum=0;
            while(n!=0)
            {
                x=n%10;
                sum+=x;
                n=n/10;
            }
            if(sum<=9)
            {
                break;
            }
            n=sum;
        }

        while(1)
        {
            sum1=0;
            while(m!=0)
            {
                x=m%10;
                sum1+=x;
                m=m/10;
            }
            if(sum1<=9)
            {
                break;
            }
            m=sum1;
        }
        double result;
        result=(double) min(sum,sum1)/max(sum,sum1);
        result*=100;
        cout<<fixed;
        cout<<setprecision(2)<<result<<" %"<<endl;

    }
    return 0;
}

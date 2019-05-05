#include <bits/stdc++.h>
using namespace std;
int main()
{
    int g;
    cin>>g;
    for(int j=0; j<g; j++)
    {
        long long int verify,money;
        double tax;
        cin>>money;
        tax=0;
        for(int i=1; i<=5; i++)
        {
            if(i==1)
            {
                if(money>180000)
                {
                    money-=180000;
                }
                else if(money<=180000)
                {
                    tax=0;
                    break;
                }
            }

            else if(i==2)
            {
                if(money>=1 && money<=300000)
                {
                    double x;
                    x=(double) money;
                    tax+=(x*0.1);
                    break;
                }
                else
                {
                    money=money-300000;
                    tax+=(300000*0.1);
                }
            }

            else if(i==3)
            {
                if(money>=1 && money<=400000)
                {
                    double x;
                    x=(double) money;
                    tax+=(x*0.15);
                    break;
                }
                else
                {
                    money=money-400000;
                    tax+=(400000*0.15);
                }
            }

            else if(i==4)
            {
                if(money>=1 && money<=300000)
                {
                    double x;
                    x=(double) money;
                    tax+=(x*0.2);
                    break;
                }
                else
                {
                    money=money-300000;
                    tax+=(300000*0.2);
                }
            }
            else if(i==5)
            {
                if(money>=1)
                {
                    double x;
                    x=(double) money;
                    tax+=(x*0.25);
                    break;
                }
            }

        }

        tax=ceil(tax);
        verify=(int)tax;
        if(verify>=1 && verify<=2000)
            cout<<"Case "<<j+1<<": "<<2000<<endl;
        else
            cout<<"Case "<<j+1<<": "<<verify<<endl;
    }

    return 0;

}

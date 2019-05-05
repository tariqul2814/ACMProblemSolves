#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        string x="";
        string y="";

        cin.ignore();

        cin>>x;
        cin>>y;


        int size1=x.size();
        int size2=y.size();

        int b=0;

        int number = 0;
        int arr[]={128,64,32,16,8,4,2,1};

        int track = 0;

        for(int j=0;j<=size1;j++)
        {
            int checkmate=0;

            if(x[j]=='.' || j==(size1))
            {
                checkmate=1;
                number = number / 10;

                int number2 = 0;
                int check12 = 0;
                for(;b<size2;b++)
                {
                    if(y[b]=='.' || b==(size2-1))
                    {
                        if(y[b]=='1')
                        {
                            number2+=arr[check12] ;
                        }
                        b++;
                        break;

                    }
                    if(y[b]=='1')
                    {
                       number2+=arr[check12] ;
                    }
                    check12++;
                }
                check12=0;
                if(number2==number)
                {
                    track++;
                }
                else
                    break;

                number=0;
            }

            if(checkmate==0)
            {
                int n1 = x[j];
                n1 = n1 - 48;
                number += n1;
                number = number * 10;
            }


        }

        if(track==4)
        {
            cout<<"Case "<<i+1<<": Yes"<<endl;
        }
        else
            cout<<"Case "<<i+1<<": No"<<endl;



    }

}

#include <iostream>
using namespace std;
int main()
{
    long long int participants,budget,hotels,weeks;
    long long int lowbudget=0;

    while(cin>>participants>>budget>>hotels>>weeks)
    {
        long long int hotelprice[hotels];
        long long int seatarr[hotels*weeks];
        long long int rec=0;
        long long int i;
        for(i=0;i<hotels;i++)
        {
            cin>>hotelprice[i];
            for(long long int j=0;j<weeks;j++)
            {
                cin>>seatarr[rec];
                rec++;
            }
        }

        rec=0;
        lowbudget=0;
        int check=0;
        int prevrec=0;
        for(i=0;i<hotels;i++)
        {
            if((hotelprice[i]*participants)<=budget)
            {


                int counter=0;
                for(long long int j=0;j<weeks;j++)
                {
                    if(seatarr[rec]>=participants)
                    {
                        counter++;
                        rec++;
                        break;
                    }
                    else
                        rec++;
                }
                if(counter==1)
                {

                    if(check==0)
                    {

                        lowbudget=(hotelprice[i]*participants);

                        check++;
                    }
                    else
                    {
                        if(lowbudget>(hotelprice[i]*participants))
                        {
                            lowbudget=hotelprice[i]*participants;
                        }
                    }

                }
                rec=prevrec+weeks;
                prevrec=rec;
            }
            else
            {
                rec=prevrec+weeks;
                prevrec=rec;
                continue;
            }

        }

        if(lowbudget>0)
        cout<<lowbudget<<endl;
        else
        cout<<"stay home"<<endl;
    }
    return 0;
}


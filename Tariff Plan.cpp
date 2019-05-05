#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int z,mila=0,juice=0;
        cin>>z;
        int arr[z];
        for(int j=0; j<z; j++)
            cin>>arr[j];
        for(int j=0; j<z; j++)
        {
            int a=1,b,counter=30,counter1=0,counter2=0,l=1;
            b=arr[j];
            while(b>(counter-1))
            {
                counter=30*a;
                a++;
                counter1++;
            }
            counter=60;
            while(b>(counter-1))
            {
                counter=60*l;
                l++;
                counter2++;
            }

            if(counter2==0)
            {
                juice+=15;
            }
            else if(counter2>0)
            {
                counter2=counter2*15;
                juice+=counter2;
            }

            if(counter1==0)
            {
                mila+=10;
            }
            else if(counter1>0)
            {
                counter1=counter1*10;
                mila+=counter1;
            }

        }

        if(mila==juice)
        {
            //cout<<mila<<" "<<juice<<endl;
            cout<<"Case "<<i+1<<": "<<"Mile Juice "<<mila<<endl;
        }

        else if(mila<juice)
        {
            //cout<<mila<<" "<<juice<<endl;
            cout<<"Case "<<i+1<<": "<<"Mile "<<mila<<endl;
        }

        else if(juice<mila)
        {
           // cout<<mila<<" "<<juice<<endl;
            cout<<"Case "<<i+1<<": "<<"Juice "<<juice<<endl;
        }
    }
    return 0;
}

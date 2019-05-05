#include <bits/stdc++.h>
using namespace std;
int main()
{
    int g;
    cin>>g;
    for(int s=0; s<g; s++)
    {
        int arr[4];
        int record=0;
        int record2=0;
        int record3=0;
        int record4=0;
        for(int i=0; i<4; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<4; i++)
        {
            int n;
            n=arr[i];
            int k=1000;
            int number=0;
            int rem1,rem2;
            for(int j=0; j<4; j++)
            {
                if(j==1)
                {
                    rem1=n/k;
                    n=n%k;
                    k=k/10;
                    continue;
                }
                else if(j==2)
                {
                    rem2=n/k;
                    number+=rem2;
                    number*=10;
                    number+=rem1;
                    n=n%k;
                    k=k/10;
                    number*=10;
                    continue;
                }
                number+=n/k;
                n=n%k;
                k=k/10;
                number*=10;
            }
            number/=10;
            arr[i]=number;
        }
        record=0;
        record2=0;
        record3=0;
        record4=0;
        for(int i=0; i<4; i++)
        {
            int p,counter=0;
            p=arr[i];
            while(p!=0)
            {
                counter++;
                p=p/10;
            }
            p=arr[i];
            if(counter==4)
            {
                int j=0;
                int k;
                while(j!=4)
                {
                    if(j==2 || j==3)
                    {
                        record2=p%10;
                        record2*=2;
                        while(record2!=0)
                        {
                            k=record2%10;
                            record3+=k;
                            record2/=10;
                        }
                        p=p/10;
                        j++;
                    }
                    else
                    {
                        p/=10;
                        j++;
                    }
                }
            }
            else if(counter<4)
            {
                int j=0;
                int k;
                if(counter==3)
                {
                    while(j!=3)
                    {
                        if(j==2)
                        {
                            record2=p%10;
                            record2*=2;
                            while(record2!=0)
                            {
                                k=record2%10;
                                record3+=k;
                                record2/=10;
                            }
                            p=p/10;
                            j++;
                        }
                        else
                        {
                            p/=10;
                            j++;
                        }
                    }
                }
            }
        }
        record4=0;
        for(int i=0; i<4; i++)
        {
            int k,p;
            k=arr[i];
            int j=0;
            while(j!=2)
            {
                record2=k%10;
                record4+=record2;
                k=k/10;
                j++;
            }
        }
        record=record3+record4;
        int i=0;
        while(i!=1)
        {
            record2=record%10;
            record=record/10;
            i++;
        }
        if(record2==0)
        {
            cout<<"Valid"<<endl;
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}

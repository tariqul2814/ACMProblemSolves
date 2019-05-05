#include <bits/stdc++.h>

using namespace std;

long long int n[5];

int main()
{

    long long int t;
    cin>>t;
    memset(n,0,sizeof(n));

    int counter = 0;

    for(long long int i=0;i<t;i++)
    {
        int p;
        scanf("%d", &p);
        if(p==4)
        {
            counter++;
            continue;
        }
        n[p]++;
    }
    if(n[3]>0)
    {
        if(n[1]>0)
        {
            if(n[3]==n[1])
            {
                counter+=n[1];
                 n[1]=0;
                n[3]=0;
            }

            else if(n[3]<n[1])
            {
                counter+=n[3];
                n[1]= n[1] - n[3];
                n[3] = 0;
            }

            else if(n[3]>n[1])
            {
                counter+=n[1];
                n[3] = n[3] - n[1];
                n[1] = 0;
                if(n[3]!=0)
                {
                    counter+=n[3];
                    n[3]=0;
                }
            }
        }
        else
            counter+=n[3];
    }
    //cout<<"3=> "<<counter<<endl;

    if(n[2]>0)
    {
        if(n[2]%2==0)
        {
            counter += (n[2]/2);
            n[2] = 0;
        }

        else if(n[2]%2!=0)
        {
            counter+=(n[2]/2);
            n[2] = n[2] % 2;
            if(n[1]==2 && n[2]==1)
            {
                counter++;
                n[1]=0;
                n[2]=0;
            }
            else if(n[1]>=2)
            {
                int m;
                m=n[2]*2;
                if(n[1]>=m)
                {
                    n[1] = n[1] - m;
                    counter++;
                }
            }
            else if(n[1]==0)
            {
                counter++;
                n[2]=0;
            }
        }
    }

    //cout<<"2=> "<<counter<<endl;

    if(n[1]>0)
    {
        if(n[1]%4==0)
        {
            counter+=(n[1]/4);
            n[1]=0;
        }
        else
        {
            counter+=(n[1]/4);
            counter++;
        }
    }

    //cout<<"1=> "<<counter<<endl;

    cout<<counter<<endl;

}

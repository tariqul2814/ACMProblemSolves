#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        string arr[n];
        double track[n];
        cin.ignore();
        memset(track,0,sizeof(track));

        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }

        double totalsum=0;
        for(int i=0;i<n;i++)
        {
            string rec = arr[i];
            double sum=0;
            if(track[i]==fabs(0.0))
            {
                int sizerec = rec.size();
                for(int j=0;j<sizerec;j++)
                {
                    if(j==0)
                    {
                        sum+=0.2;
                    }
                    else if(rec[j-1]=='d' || rec[j-1]=='f')
                    {
                        if(rec[j]=='d' || rec[j]=='f')
                        {
                            sum+=0.4;
                        }
                        else
                        {
                            sum+=0.2;
                        }
                    }
                    else if(rec[j-1]=='j' || rec[j-1]=='k')
                    {
                        if(rec[j]=='j' || rec[j]=='k')
                        {
                            sum+=0.4;
                        }
                        else
                        {
                            sum+=0.2;
                        }
                    }
                }
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i]==arr[j])
                    {
                        track[j]=sum/2;
                    }
                }
                //cout<<sum<<endl;
                totalsum+=sum;
            }
            else
            {
                //cout<<track[i]<<endl;
                totalsum+=track[i];
            }
        }
        cout<<totalsum*10<<endl;
    }


}

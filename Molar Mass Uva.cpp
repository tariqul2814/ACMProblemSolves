#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x=1;
    int counter;
    long double sum=0.0;
    cin>>n;
    long double carbon=12.01,hydrogen=1.008,oxygen=16.00,nitrogen=14.01;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int length=s.size();
        x=1;
        sum=0.0;
        for(int j=0; j<length; j++)
        {
            int counter1=0;
            if(j==0 && s[j]>=48 && s[j]<=57)
            {
                x=0;
                while(s[j]>=48 && s[j]<=57)
                {
                    int l;
                    l=s[j];
                    l=l-48;
                    x+=l;
                    x*=10;
                    j++;
                }
                j--;
                x=x/10;
            }
            else
            {
                if(s[j]=='C')
                {
                    counter=0;
                    j++;
                    while(s[j]>=48 && s[j]<=57)
                    {
                        counter1=1;
                        int l;
                        l=s[j];
                        l=l-48;
                        counter+=l;
                        counter*=10;
                        j++;
                    }
                    if(counter1==1)
                    {
                        j--;
                        counter=counter/10;
                        sum+=(carbon*(double)counter);
                        continue;
                    }
                    sum+=carbon;
                    j--;

                }
                else if(s[j]=='H')
                {
                    counter=0;
                    j++;
                    while(s[j]>=48 && s[j]<=57)
                    {
                        counter1=1;
                        int l;
                        l=s[j];
                        l=l-48;
                        counter+=l;
                        counter*=10;
                        j++;
                    }
                    if(counter1==1)
                    {
                        j--;
                        counter=counter/10;
                        sum+=(hydrogen*(double)counter);
                        continue;
                    }
                    sum+=hydrogen;
                    j--;

                }

                else if(s[j]=='O')
                {
                    counter=0;
                    j++;
                    while(s[j]>=48 && s[j]<=57)
                    {
                        counter1=1;
                        int l;
                        l=s[j];
                        l=l-48;
                        counter+=l;
                        counter*=10;
                        j++;
                    }
                    if(counter1==1)
                    {
                        j--;
                        counter=counter/10;
                        sum+=(oxygen*(double)counter);
                        continue;
                    }
                    sum+=oxygen;
                    j--;

                }

                else if(s[j]=='N')
                {
                    counter=0;
                    j++;
                    while(s[j]>=48 && s[j]<=57)
                    {
                        counter1=1;
                        int l;
                        l=s[j];
                        l=l-48;
                        counter+=l;
                        counter*=10;
                        j++;
                    }
                    if(counter1==1)
                    {
                        j--;
                        counter=counter/10;
                        sum+=(nitrogen*(double)counter);
                        continue;
                    }
                    sum+=nitrogen;
                    j--;

                }
            }
        }

        cout<<fixed;
        sum=sum*(double)x;
        cout<<setprecision(3)<<sum<<endl;

    }
}

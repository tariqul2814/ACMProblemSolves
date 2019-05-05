#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    while(getline(cin,n))
    {
        int counter=0;
        int record=0;
        if(n=="DONE")
            break;
        int i,j,siz;
        i=0;
        siz=n.size();
        j=siz-1;
        for(;i<siz;)
        {
            if(n[i]==' ' || n[i]=='.' || n[i]==',' || n[i]=='?' || n[i]=='!')
            {
                i++;
            }
            if(n[j]==' ' || n[j]=='.' || n[j]==',' || n[j]=='?' || n[j]=='!')
            {
                j--;
            }

            if(((n[i]>=65 && n[i]<=90) || (n[i]>=97 && n[i]<=122))&& ((n[j]>=65 && n[j]<=90) || (n[j]>=97 && n[j]<=122)))
            {
                if(n[i]>=65 && n[i]<=90)
                {
                    n[i]=n[i]+32;
                }
                if(n[j]>=65 && n[j]<=90)
                {
                    n[j]=n[j]+32;
                }

                if(n[i]==n[j])
                {
                    i++;
                    j--;
                }

                else if(n[i]!=n[j])
                {
                    counter=1;
                    break;
                }

            }
        }
        if(counter==1)
        {
            cout<<"Uh oh.."<<endl;
        }
        else
            cout<<"You won't be eaten!"<<endl;
    }

    return 0;
}

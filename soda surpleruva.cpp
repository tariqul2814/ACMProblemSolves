#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int tstcase,e,f,c,counter,counter1,counter2;
    cin>>tstcase;
    for(int i=0; i<tstcase; i++)
    {
        counter1=0;
        cin>>e>>f>>c;
        e=e+f;
        while(e>=c)
        {
            counter=e;
            e=e/c;
            counter1+=e;
            if(counter%c!=0)
            {
                counter2=counter%c;
                e+=counter2;
            }
        }
        cout<<counter1<<endl;
    }
    return 0;
}

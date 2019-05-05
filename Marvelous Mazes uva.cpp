#include <iostream>
using namespace std;
int main()
{
    string n;
    while(getline(cin,n))
    {
        int sizen;
        sizen=n.size();
        int counter=0;
        for(int i=0;i<sizen;i++)
        {
            counter=0;
            if(n[i]=='!')
            {
                cout<<endl;
                continue;
            }
            if(n[i]>='0' && n[i]<='9')
            {
                while(n[i]>='0' && n[i]<='9')
                {
                    //cout<<n[i]<<" "<<"I am Stuck"<<endl;
                    int p;
                    p=n[i];
                    p=p-48;
                    counter+=p;
                    i++;
                }
               // cout<<counter<<endl;
            }
            for(int k=0;k<counter;k++)
            {
                if(n[i]=='b')
                    cout<<" ";

                else
                cout<<n[i];
            }
        }
        cout<<endl;
    }
}

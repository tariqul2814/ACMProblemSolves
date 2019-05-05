#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    while(cin>>n>>m)
    {
        string s;
        long long int p=n,pp=n,h1=1,ans1,ans2,recorder=0,prev=0;
        ans1=n;
        long long int counter=0;
        s="";
        prev=n;
        while(1)
        {
            if(m==0)
            {
                recorder=1;
                break;
            }
            counter=0;
            h1=1;
            int x = ans1%m;
            ans1 = ans1/m;
            if(ans1>=prev)
            {
                recorder=1;
                break;
            }
            if(x!=0)
            {
                recorder=1;
                break;
            }
            else if(ans1==1)
            {
                string q="1";
                s+=q;
                break;
            }
            else
            {
                p=ans1;
                while(p!=0)
                {
                    p=p/10;
                    counter++;
                }
                //cout<<"I am"<<endl;
                //cout<<counter<<endl;
                counter--;
                while(counter!=0)
                {
                    h1*=10;
                    counter--;
                }
                //cout<<h1<<endl;
                p=ans1;
                while(h1!=0)
                {
                    int rec;
                    rec=p/h1;
                    //cout<<rec<<endl;
                    rec=rec+48;
                    s+=rec;
                    p=p%h1;
                    h1=h1/10;
                }
                s+=" ";
            }
        }
        if(recorder==0)
            cout<<n<<" "<<s<<endl;
        else
            cout<<"Boring!"<<endl;
    }
}

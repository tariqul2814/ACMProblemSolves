#include <bits/stdc++.h>
using namespace std;
int main()
{
    string h;
    while(getline(cin,h))
    {
        int sizen;
        sizen=h.size();
        for(int i=0;i<sizen;i++)
        {
            if(h[i]=='B'||h[i]=='F'||h[i]=='P'||h[i]=='V')
            {
                h[i]='-';
            }
            else if(h[i]=='C'||h[i]=='G'||h[i]=='J'||h[i]=='K'||h[i]=='Q'||h[i]=='S'||h[i]=='X'||h[i]=='Z')
            {
                h[i]='+';
            }
            else if(h[i]=='D'||h[i]=='T')
            {
                h[i]='*';
            }
            else if(h[i]=='L')
            {
                h[i]='/';
            }
            else if(h[i]=='M'||h[i]=='N')
            {
                h[i]='.';
            }
            else if(h[i]=='R')
            {
                h[i]=',';
            }
            else
                h[i]='x';
        }
        //cout<<h<<endl;
        string counter="";
        for(int i=0;i<sizen;i++)
        {
            char xx=h[i];
            int counter1=0;
            while(h[i]==xx)
            {
                //cout<<"I am in"<<endl;
                if(i+1==sizen)
                {
                    counter1=1;
                    break;
                }
                else
                i++;
            }
            //cout<<"I am OUT"<<endl;

            if(counter1==0)
            i--;
            if(xx=='-')
            {
                counter+="1";
            }
            else if(xx=='+')
            {
                counter+="2";
            }
            else if(xx=='*')
            {
                counter+="3";
            }
            else if(xx=='/')
            {
                counter+="4";
            }
            else if(xx=='.')
            {
                counter+="5";
            }
            else if(xx==',')
            {
                counter+="6";
            }
        }
        cout<<counter<<endl;

    }
}

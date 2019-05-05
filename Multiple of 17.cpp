#include <bits/stdc++.h>
using namespace std;
void multiplication(string no)
{
    int counter=0,reminder=0,p=0,rem=0,k,s,d;
    string ans,l;
    while(1)
    {
        s=no.size();
        for(int i=0; i<s; i++)
        {
            string l;
            l=no[i];
            if(counter==0)
            {
                k=l[0];
                k=k-48;
                if(k<17)
                {
                    while(k<17)
                    {
                        i++;
                        if(i==s)
                            break;

                        k=k*10;
                        p=no[i];
                        p=p-48;
                        k+=p;
                    }
                    d=k/17;
                    p=k%17;
                    d=d+48;
                    ans+=d;
                }
                counter=1;

            }
            else if(counter==1)
            {
                if(p>=17)
                {
                    d=p/17;
                    p=p%17;
                    d=d+48;
                    ans+=d;
                    i--;
                }
                else
                {
                    string l;
                    l=no[i];
                    k=l[0];
                    k=k-48;
                    p=p*10;
                    p+=k;
                    if(p<17)
                    {
                        ans+='0';
                    }
                    else
                    {
                        d=p/17;
                        p=p%17;
                        d=d+48;
                        ans+=d;
                    }
                }
            }
        }
        if(p!=0)
        {
            cout<<"Not Divisable"<<endl;
            break;

        }
        else
        {
            cout<<"Divisable"<<endl;
            break;
        }
    }
}

string substraction(string s)
{
    int n=s.size();
    int j=1,remin=0,remin1;
    int p;
    p=s[n-1];
    p=p-48;
    p=p*5;
    if(n<=2)
    {
        string x,y;
        int h,g;
        x+=(p/10);
        x+=(p%10);
        s=x;

    }
    else
    {
        s[n-1]='\0';
        for(int i=n-2; i>=0; i--)
        {
            int x;
            x=s[i];
            x=x-48;
            if(j==1)
            {
                remin1=p%10;
                p=p/10;
                j++;
                if(x<remin1)
                {
                    x=x+10;
                    x=x-remin1;
                    x=x+48;
                    s[i]=x;
                    remin=1;
                }
                else
                {
                    x=x-remin1;
                    x=x+48;
                    s[i]=x;
                    remin=0;
                }
            }
            else if(j==2)
            {
                remin1=p%10;
                p=p/10;
                j++;
                if(x<remin1)
                {
                    if(remin==1)
                    {
                        remin1++;
                        remin1=0;
                    }
                    x=x+10;
                    x=x-remin1;
                    x=x+48;
                    s[i]=x;
                    remin=1;
                }
                else
                {
                    x=x-remin1;
                    x=x+48;
                    s[i]=x;
                    remin=0;
                }
            }
            else
            {
                if(remin==1)
                {
                    if(x<remin)
                    {
                        x=x+10;
                        x=x-remin;
                        x=x+48;
                        s[i]=x;
                        remin=1;
                    }
                    else
                    {
                        x=x-remin;
                        x=x+48;
                        s[i]=x;
                        remin=0;
                    }
                }
                else
                {
                    x=x+48;
                    s[i]=x;
                    remin=0;
                }
            }
        }
    }
    return s;
}
int main()
{
    int counter=0,s,p,d,k,reminder=0,rem;
    string no,ans,l;
    while(cin>>no)
    {
        if(no=="0")
            break;
        no=substraction(no);
        //multiplication(no);
        cout<<no<<endl;
    }
}

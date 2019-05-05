#include <bits/stdc++.h>
using namespace std;
int main()
{
    char d[]="danil";
    char o[]="olya";
    char s[]="slava";
    char a[]="ann";
    char p[]="nikita";
    char n[200];
    gets(n);
    strlwr(n);
    int counter=0,record=0;
    int len=strlen(n);
    for(int i=0;i<len;i++)
    {
        if(counter>1)
        {
            record=1;
            break;
        }
        if(n[i]=='d')
        {
            i++;
            int j=1;
            int sizen=strlen(d);
            while(1)
            {
                if(sizen==j)
                {
                    i--;
                    counter++;
                    break;
                }
                if(i>=len)
                    break;
                if(d[j]==n[i])
                {
                    j++;
                    i++;
                }
                else
                {
                    i--;
                    break;
                }
            }
        }
        else if(n[i]=='o')
        {
            i++;
            int j=1;
            int sizen=strlen(o);
            while(1)
            {
                if(sizen==j)
                {
                    i--;
                    counter++;
                    break;
                }
                if(i>=len)
                    break;
                if(o[j]==n[i])
                {
                    j++;
                    i++;
                }
                else
                {
                    i--;
                    break;
                }
            }
        }
        else if(n[i]=='s')
        {
            i++;
            int j=1;
            int sizen=strlen(s);
            while(1)
            {
                if(sizen==j)
                {
                    i--;
                    counter++;
                    break;
                }
                if(i>=len)
                    break;
                if(s[j]==n[i])
                {
                    j++;
                    i++;
                }
                else
                {
                    i--;
                    break;
                }
            }
        }
        else if(n[i]=='a')
        {
            i++;
            int j=1;
            int sizen=strlen(a);
            while(1)
            {
                if(sizen==j)
                {
                    i--;
                    counter++;
                    break;
                }
                if(i>=len)
                    break;
                if(a[j]==n[i])
                {
                    j++;
                    i++;
                }
                else
                {
                    i--;
                    break;
                }
            }
        }
        else if(n[i]=='n')
        {
            i++;
            int j=1;
            int sizen=strlen(p);
            while(1)
            {

                if(sizen==j)
                {
                    i--;
                    counter++;
                    break;
                }
                if(i>=len)
                    break;
                if(p[j]==n[i])
                {
                    cout<<"Match"<<endl;
                    j++;
                    i++;
                }
                else
                {
                    i--;
                    break;
                }
            }
        }
    }
    if(counter==1 && record==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;

    }
    return 0;
}

#include <bits/stdc++.h>
#include <string.h>
#include <string>
using namespace std;
int main()
{
    char str[300];
    gets(str);
    int sizen;
    sizen=strlen(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='A' || str[i]=='a')
        {
          continue;
        }
        else if(str[i]=='E' || str[i]=='e')
        {
            continue;
        }
        else if(str[i]=='I' || str[i]=='i')
        {
            continue;
        }
        else if(str[i]=='O' || str[i]=='o')
        {
            continue;
        }
        else if(str[i]=='U' || str[i]=='u')
        {
            continue;
        }
        else if(str[i]=='Y' || str[i]=='y')
        {
            continue;
        }
        else
        {
                int x;
                x=str[i];
                if(x>=65 && x<=90)
                {
                    x=32+x;
                    str[i]=x;
                    cout<<".";
                    cout<<str[i];
                }
                else
                {
                    cout<<".";
                    cout<<str[i];
                }

        }
    }
}

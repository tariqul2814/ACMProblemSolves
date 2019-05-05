#include <bits/stdc++.h>
using namespace std;
long long int generateno(string n)
{
    int sizen;
    sizen=n.size();
    long long int rec=0;
    for(int i=0;i<sizen;i++)
    {
        if(n[i]>=97 && n[i]<=122)
        {
            long long int rec1;
            rec1=n[i];
            rec1=rec1-96;
            rec+=rec1;
        }
        else if(n[i]>=65 && n[i]<=90)
        {
            long long int rec1;
            rec1=n[i];
            rec1=rec1-64;
            rec1+=26;
            rec+=rec1;
        }
    }
    return rec;
}

bool isitprime(long long int p)
{

        int sprtI= int(sqrt((double)p));
        for(int i=2;i<=sprtI;i++)
        {
            if(p%i==0)
                return false;
        }
        return true;

}
int main()
{
    string n;
    while(getline(cin,n))
    {
        long long int s;
        s=generateno(n);
        if(isitprime(s)==true)
        {
            cout<<"It is a prime word."<<endl;
        }
        else
        {
            cout<<"It is not a prime word."<<endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;

    cin>>n;

    long long int sec=0,minu=0,hr=0;

    if(n>60)
    {
        sec = n%60;
        if((n/60)>60)
        {
            hr = n/60;
            minu = hr % 60;
            hr = hr/60;
        }
        else
        {
            minu = n / 60;
            sec = n%60;
        }
    }
    else
    {
        sec = n;
    }

    cout<<hr<<':'<<minu<<':'<<sec<<endl;
}

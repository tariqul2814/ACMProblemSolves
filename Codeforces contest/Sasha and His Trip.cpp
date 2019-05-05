#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;


    int distance=n-1;
    int counter=0;
    if(m <= distance)
    counter = m;
    else
        counter = distance;


    for(int i=2;i<=n;i++)
    {
        distance--;
        m--;
        if(distance>m)
        {
            m++;
            counter+=i;
        }
    }

    cout<<counter<<endl;

}

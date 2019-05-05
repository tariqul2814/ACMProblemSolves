#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int counter=0;
        if(n==0)
            break;
        int i=1;
        long long int cube=i,cube1;
        while(1)
        {
            cube=0;
            cube=i*i*i;
            if(n<=cube)
            {
                break;
            }
            i++;
        }
        int j;
        j=i-1;
        for(; j>=0; j--)
        {
            cube1=j*j*j;
            if((cube-cube1)==n)
            {

                cout<<i<<" "<<j<<endl;
                counter=1;
                break;
            }
        }

        if(counter==0)
            cout<<"No solution"<<endl;
    }
    return 0;
}

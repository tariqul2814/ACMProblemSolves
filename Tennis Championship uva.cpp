#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {
        long long int match=0;
        long long int pre=0;
        long long int counter=n;
        while(counter!=0)
        {
            counter+=pre;
            if(counter%2!=0)
            {
                pre=1;
                counter-=1;
            }
            else
                pre=0;

            match+=(counter/2);
            counter/=2;
        }
        cout<<match<<endl;

    }
    return 0;
}

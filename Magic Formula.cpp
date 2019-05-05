#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,L;
    while(cin>>a>>b>>c>>d>>L)
    {
        int counter=0;
        if(a==0 && b==0 && d==0 && L  ==0)
            break;
        for(int i=0;i<=L;i++)
        {
            long long int div;
            div=(a*i*i)+(b*i)+c;
            if(div%d==0)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}

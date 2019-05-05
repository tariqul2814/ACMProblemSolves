#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int counter=0,i=0,test,n,j;
//    scanf("%lld",&test);
//    for(long long int j=0;j<test;j++)
//    {
//        i=0,counter=0;
//        scanf("%lld",&n);
//        while(counter<=n)
//        {
//            i++;
//            counter+=i;
//        }
//        if(counter==n)
//        {
//          printf("%lld\n",i);
//        }
//        else
//        {
//            printf("%lld\n",i-1);
//        }
//
//    }

    for(j=1; ; j++)
    {
        if(counter==1000000000000000000)
            break;
        counter+=i;
        cout<<"I"<<endl;
        i++;
    }
    cout<<i<<endl;
}

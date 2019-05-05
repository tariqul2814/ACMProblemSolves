#include <bits/stdc++.h>
using namespace std;

long long int arr[5001];

long long int fibonacci(long long int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else if(arr[x]==-1)
    {
        arr[x]=fibonacci(x-1)+fibonacci(x-2);
    }
    else
        return arr[x];
}
int main()
{
    memset(arr,-1,5001);
    long long int h;
    while(cin>>h)
    {
        long long int hh=h;

        cout<<"The Fibonacci number for "<<h<<" is "<<fibonacci(hh)<<endl;
    }
}

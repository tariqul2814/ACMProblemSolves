#include <bits/stdc++.h>
using namespace std;
long long int arr[10005];
long long int a;
long long int b;
long long int c;
long long int d;
long long int e;
long long int f;
long long int bonnacci(long long int n)
{
    if(arr[n]!=-1)
        return arr[n];
    else
    {
        arr[n] = (bonnacci(n-1)+bonnacci(n-2)+bonnacci(n-3)+bonnacci(n-4)+bonnacci(n-5)+bonnacci(n-6))%10000007;
        return arr[n];
    }
}
int main()
{
    int t;
    long long int a,b,c,d,e,f,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        memset(arr,-1,sizeof(arr));
        cin>>a>>b>>c>>d>>e>>f>>n;
       arr[0]=a;
       arr[1]=b;
       arr[2]=c;
       arr[3]=d;
       arr[4]=e;
       arr[5]=f;
       cout<<"Case "<<i+1<<": "<<bonnacci(n)%10000007<<endl;
    }

}

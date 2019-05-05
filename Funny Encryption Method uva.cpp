#include <bits/stdc++.h>
using namespace std;

int binary(int x)
{
    if(x/2==0)
    {
        return x%2;
    }
    else
    {
        return (x%2)+binary(x/2);
    }

}

int hexa(int x)
{
    int n;
    n=x;
    int i=1;
    int result=n%10;
    n=n/10;

    while(n!=0)
    {
        int h=1;
        int hh = n%10;
        for(int j=1;j<=i;j++)
        {
            h=h*16;
        }
        result+=(hh*h);
        i++;
        n=n/10;
    }
    return binary(result);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int h;
        cin>>h;
        cout<<binary(h)<<" "<<hexa(h)<<endl;
    }

}

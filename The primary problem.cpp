#include <bits/stdc++.h>
using namespace std;
long long int arr[1000001];
int main()
{
    int flag=0;
    for(long long int i=2;i<=1000001;i++)
    {
        arr[i]=0;
    }

    for(long long int i=2;i<=1000001;i++)
    {
        if(arr[i]==0)
        {
            for(long long int j=2*i;j<=1000001;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    long long int n;
    while(cin>>n)
    {
        flag=0;
        if(n==0)
            break;
        long long int x=0,y=0,z=0,sum=0;
        sum=n-2;
        if(arr[sum]==0)
        {
           flag=1;
           long long int h,h1;
           x=2,y=sum;
           h=max(x,y);
           h1=min(x,y);
           z=h-h1;
        }
        for(long long int i=3;i<n;i+=2)
        {
            sum=n-i;
            if(sum>=i)
            {
               if(arr[sum]==0 && arr[i]==0)
               {
                   long long int h,h1,z1,s,s1;
                   s=i,s1=sum;
                   h=max(s,s1);
                   h1=min(s,s1);
                   z1=h-h1;
                   if(z1>=z)
                   {
                       flag=1;
                       x=s;
                       y=s1;
                       z=z1;
                   }
               }
            }
        }

        if(flag==1)
        {
            cout<<n<<":"<<endl;
            cout<<x<<"+"<<y<<endl;
        }
        else
        {
            cout<<n<<":"<<endl;
            cout<<"NO WAY!"<<endl;
        }
    }
}

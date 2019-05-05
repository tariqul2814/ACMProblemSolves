#include <bits/stdc++.h>
using namespace std;
long long int power(int counter,int n,int ans)
{
    if(counter==n)
    {
        return ans;
    }
    else
    {
        counter++;
        power(counter,n,ans*2);
    }
}
int main()
{
    ///long long int n;
   /// n=power(1,1,2);
    //long long int arr[8]={6,28,496,8128,33550336,8589869056,137438691328,2305843008139952128};
    long long int number;
    cin>>number;
    long long int a1;
    char a;
    for(long long int i=0;i<number;i++)
    {
        cin>>a1;
        if(i!=number-1)
        cin>>a;
        if(a1==2 || a1==3 || a1==5 || a1==7 || a1==13 || a1==17 || a1==19)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
}

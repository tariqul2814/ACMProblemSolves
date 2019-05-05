#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        int number1=a+b;
        int ans = (number1*(number1+1))/2;
        a++;
        ans = ans + a;
        cout<<ans<<endl;
    }
}

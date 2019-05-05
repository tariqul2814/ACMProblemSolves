#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int fibonacci(int n)
{
    if(n==0 || n==1)
        return 1;
    else if(arr[n]==0)
        arr[n]=fibonacci(n-2)+fibonacci(n-1);
    return arr[n];
}
int main()
{
    memset(arr,0,1000);
    cout<<fibonacci(5)<<endl;
}

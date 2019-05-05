#include <bits/stdc++.h>
using namespace std;

int arr[300];

int fibonacci(int n)
{
    if(n==0 || n==1)
        return 1;
    else if(arr[n]==0)
        arr[n]=fibonacci(n-1) + fibonacci(n-2);

        return arr[n];
}


int main()
{
    cout<<fibonacci(25)<<endl;
}

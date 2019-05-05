#include <bits/stdc++.h>
using namespace std;

long long int arr[51];

long long int brick(int n)
{
    if(n==0 || n==1)
        return 1;
    else if(arr[n]==0)
    {
        arr[n]=brick(n-1)+brick(n-2);
    }
    return arr[n];
}

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        cout<<brick(n)<<endl;
    }
    return 0;
}

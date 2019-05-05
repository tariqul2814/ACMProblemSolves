#include <bits/stdc++.h>
using namespace std;

int recursion(int n)
{
    if(n==1)
        return 1;
    else
        return n*recursion(n-1);
}

int main()
{
    cout<<recursion(3)<<endl;
}

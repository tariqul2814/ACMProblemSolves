#include <bits/stdc++.h>
using namespace std;
int recur(int num,int counter)
{
    if(num==0)
    {
        counter/=10;
        return counter;
    }
    else
    {
        int x;
        x=num%10;
        num/=10;
        counter+=x;
        counter*=10;
        return recur(num,counter);
    }
}
int main()
{
    cout<<recur(3456,0);
}

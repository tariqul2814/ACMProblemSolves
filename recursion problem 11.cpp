#include <bits/stdc++.h>
using namespace std;
int recur(int *p,int i)
{
    if(i==5)
        return 0;
    else
    {
        int x,y;
        x=p[i];
        y=recur(p,i+1);
        if(x>=y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }
}
int main()
{
    int arr[5];
    arr[0]=7;
    arr[1]=4;
    arr[2]=9;
    arr[3]=6;
    arr[4]=2;
    cout<<recur(arr,0)<<endl;
}

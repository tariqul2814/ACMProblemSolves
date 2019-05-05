#include <bits/stdc++.h>
using namespace std;
void print(int n);
int main()
{
    print(1);
}
void print(int i)
{
    if(i==11)
        return;
    cout<<i<<endl;
    print(i+1);
    cout<<endl;
    cout<<i<<endl;
}

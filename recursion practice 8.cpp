#include <bits/stdc++.h>
using namespace std;

int recur(int flag,int counter,int counter1)
{
    if(counter==counter1)
        return 0;
    else if(flag<2)
        return 1;
    else if(flag%counter1==0)
    {
        return 1;
    }
    else
    {
        return recur(flag,counter,counter1+1);
    }

}
int main()
{
    if(recur(5,(int) sqrt(5),2)==1)
        cout<<"Not Prime"<<endl;
    else
        cout<<"Prime"<<endl;
}

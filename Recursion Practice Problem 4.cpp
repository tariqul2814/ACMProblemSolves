#include <iostream>
using namespace std;
void recursion(int i,int n)
{
    if(i==0)
    {
        cout<<"1 ";
        i++;
        recursion(i,n);
    }
    else if(i<n)
    {
        if(i==1)
        {

            cout<<" + x";
            i++;
            recursion(i,n);
        }
        else
        {
            cout<<" + x^"<<i;
            i++;
            recursion(i,n);
        }
    }
}
int main()
{
    int n,i;
    i=0,n=5;
    recursion(i,n);

}

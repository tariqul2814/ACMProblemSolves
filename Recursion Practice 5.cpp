#include <iostream>
using namespace std;
int recursion(int n,int i)
{
    if(n==i)
        return 0;
    else if(n==0)
    {
        return 1+recursion(n+1,i);
    }
    else if(n==1)
    {
        return 2+recursion(n+1,i);
    }
    else
    {
        int x,y=1;
        x=n;
        for(int f=1; f<=n; f++)
        {
           y*=2;
        }
        n=y;
        cout<<n<<endl;
        return n+recursion(x+1,i);
    }

}
int main()
{
    cout<<recursion(0,5)<<endl;
    return 0;
}

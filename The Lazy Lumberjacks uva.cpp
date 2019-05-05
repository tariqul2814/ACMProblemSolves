#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        double a,b,c,result3=0;
        double result1,result2;
        cin>>a>>b>>c;
        result1 = (a+b+c)/2;
        result3 = result1;
        if(a==0 || b==0 || c==0)
        {
            cout<<"Wrong!!"<<endl;
        }
        else if(result1<a || result1<b || result1<c)
        {
            cout<<"Wrong!!"<<endl;
        }
        else if((result1-a)==0.0 || (result1-b)==0.0 || (result1-c)==0.0)
        {
            cout<<"Wrong!!"<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
        }

    }
}

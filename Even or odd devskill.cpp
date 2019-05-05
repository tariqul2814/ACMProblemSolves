#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int s,l,num=2,num1=3,counter=0,summation=0;
        cin>>s>>l;
        for(int j=1;j<=l;j++)
        {
            if(s==1 && counter==0)
            {
                summation+=2;
            }
            if(j<s && j>1)
            {
                num1+=2;
            }
            else if(j>=s && j>1)
            {
                num1+=2;
                cout<<num1<<endl;
                summation+=num1;
            }
        }
        if(summation%2==0)
            cout<<summation<<"Even"<<endl;
        else
            cout<<summation<<"Odd"<<endl;
    }
}

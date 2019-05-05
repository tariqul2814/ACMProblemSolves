#include <bits/stdc++.h>
using namespace std;

char grade(int n)
{
    if(n>=90)
        return 'A';
    else if(n>=80 && n<90)
        return 'B';
    else if(n>=70 && n<80)
        return 'C';
    else if(n>=60 && n<70)
        return 'D';
    else if(n<60)
        return 'F';
}

int checkbesttwo(int num,int num1, int num2)
{
    int large;
    if(num>=num1 && num>=num2)
    {
        if(num1>=num2)
        {
            large=(num+num1)/2;
            return large;
        }
        else
        {
            large=(num+num2)/2;
            return large;
        }
    }

    else if(num1>=num && num1>=num2)
    {
        if(num>=num2)
        {
            large=(num1+num)/2;
            return large;
        }
        else
        {
            large=(num2+num1)/2;
            return large;
        }
    }
    else if(num2>=num && num2>=num1)
    {
        if(num>=num1)
        {
            large=(num2+num)/2;
            return large;
        }
        else
        {
            large=(num2+num1)/2;
            return large;
        }
    }
}
int main()
{
    int loop;
    cin>>loop;
    for(int i=0; i<loop; i++)
    {
        int term1,term2,Final,attend,class1,class2,class3,largeclass,addition;
        cin>>term1>>term2>>Final>>attend>>class1>>class2>>class3;
        largeclass=checkbesttwo(class1,class2,class3);
        addition=term1+term2+Final+attend+largeclass;
        cout<<"Case "<<i+1<<": "<<grade(addition)<<endl;
    }
    return 0;
}

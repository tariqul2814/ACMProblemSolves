#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int level;
    cin>>level;
    cin.ignore();
    for(long long int hh=0; hh<level; hh++)
    {
        string number1,number11,number2,number22;
        string ans="";
        cin>>number1>>number2;
        long long int size1,size2;
        size1=number1.size();
        size2=number2.size();
        for(long long int i=size1-1; i>=0; i--)
        {
            number11+=number1[i];
        }
        for(long long int i=size2-1; i>=0; i--)
        {
            number22+=number2[i];
        }

        if(size1>=size2)
        {
            long long int j=size2-1;
            int carry=0;
            //cout<<number11<< " " <<number22<<endl;
            for(long long int i=size1-1; i>=0; i--)
            {
                long long int x=0,y=0,sum;
                x=number11[i]-48;
                if(j>=0)
                y=number22[j]-48;
                sum=0;
                //cout<<x<<" "<<y<<endl;
                sum+=(x+y);
                sum+=carry;
                carry=0;
                if(sum>9)
                {
                    carry=1;
                    sum=abs(sum-10);
                    //ans+=(sum+48);
                }
                //cout<<sum<<endl;
                ans+=(sum+48);
                //cout<<" Ans: "<<ans<<endl;
                if(j>=0)
                j--;
                // cout<<sum<<endl;
            }
            if(carry==1)
            {
                ans+='1';
            }
        }
        else if(size1<size2)
        {
            long long int j=size1-1;
            int carry=0;
            for(long long int i=size2-1; i>=0; i--)
            {
                long long int x=0,y=0,sum;
                sum=0;
                if(j>=0)
                x=number11[j]-48;

                y=number22[i]-48;
                sum+=(x+y);
                sum+=carry;
                carry=0;
                if(sum>9)
                {
                    carry=1;
                    sum=abs(sum-10);
                    //ans+=(sum+48);
                }
                sum=sum+48;
                ans+=sum;
                if(j>=0)
                j--;
            }
            if(carry==1)
            {
                ans+="1";
            }
        }
        size1=ans.size();
        long long int check=0;
        string ans1="";
        for(long long int i=0;i<size1;i++)
        {
            if(check==0 && ans[i]!='0')
            {
                check=1;
                ans1+=ans[i];
            }

            else if(check==1)
            {
                ans1+=ans[i];
            }

        }
        size1=ans1.size();
        if(size1!=0)
        cout<<ans1<<endl;
        else
            cout<<"0"<<endl;
    }
}

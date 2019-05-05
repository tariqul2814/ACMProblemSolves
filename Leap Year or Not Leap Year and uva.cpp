#include <iostream>
using namespace std;
int main()
{
    string n;
    int k=0;
    while(getline(cin,n))
    {
        if(k>0)
        {
            cout<<endl;
        }
        k++;
        long long int sizen=n.size();
        long long int num=0,div=0,div1=0,rem=0,rec=400;
        long long int i=0;
        int flag1=0,flag2=0,flag3=0;
        while(i!=sizen)
        {
            while(1)
            {
                if(i>=sizen)
                {
                    break;
                }
                if(div>=rec)
                    break;
                div=div*10;
                long long int m;
                m=n[i];
                m=m-48;
                div+=m;
                i++;
            }
            div=div%rec;
        }
        if(div==0)
        {
            flag1=1;
            num=0,div=0,div1=0,rem=0,rec=55;
            i=0;
            while(i!=sizen)
            {
                while(1)
                {
                    if(i>=sizen)
                    {
                        break;
                    }
                    if(div>=rec)
                        break;
                    div=div*10;
                    long long int m;
                    m=n[i];
                    m=m-48;
                    div+=m;
                    i++;
                }
                div=div%rec;
            }
            if(div==0)
            {
                flag3=1;
            }
        }
        else if(div!=0)
        {
            num=0,div=0,div1=0,rem=0,rec=4;
            i=0;
            while(i!=sizen)
            {
                while(1)
                {
                    if(i>=sizen)
                    {
                        break;
                    }
                    if(div>=rec)
                        break;
                    div=div*10;
                    long long int m;
                    m=n[i];
                    m=m-48;
                    div+=m;
                    i++;
                }
                div=div%rec;
            }
            if(div==0)
            {
                num=0,div=0,div1=0,rem=0,rec=100;
                i=0;
                while(i!=sizen)
                {
                    while(1)
                    {
                        if(i>=sizen)
                        {
                            break;
                        }
                        if(div>=rec)
                            break;
                        div=div*10;
                        long long int m;
                        m=n[i];
                        m=m-48;
                        div+=m;
                        i++;
                    }
                    div=div%rec;
                }
                if(div==0)
                {
                    flag1=0;
                    flag3=0;
                }
                else if(div!=0)
                {
                    flag1=1;
                    num=0,div=0,div1=0,rem=0,rec=55;
                    i=0;
                    while(i!=sizen)
                    {
                        while(1)
                        {
                            if(i>=sizen)
                            {
                                break;
                            }
                            if(div>=rec)
                                break;
                            div=div*10;
                            long long int m;
                            m=n[i];
                            m=m-48;
                            div+=m;
                            i++;
                        }
                        div=div%rec;
                    }
                    if(div==0)
                    {
                        flag3=1;
                    }
                }
            }
        }
            num=0,div=0,div1=0,rem=0,rec=15;
            i=0;
            while(i!=sizen)
            {
                while(1)
                {
                    if(i>=sizen)
                    {
                        break;
                    }
                    if(div>=rec)
                        break;
                    div=div*10;
                    long long int m;
                    m=n[i];
                    m=m-48;
                    div+=m;
                    i++;
                }
                div=div%rec;
            }
            if(div==0)
            {
                flag2=1;
            }

            if(flag1==1)
            {
                cout<<"This is leap year."<<endl;
            }
            if(flag2==1)
            {
                cout<<"This is huluculu festival year."<<endl;
            }
            if(flag3==1)
            {
                cout<<"This is bulukulu festival year."<<endl;
            }

            if(flag1==0 && flag2==0 && flag3==0)
            {
                cout<<"This is an ordinary year."<<endl;
            }
    }
    return 0;
}

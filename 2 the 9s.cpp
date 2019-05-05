#include <bits/stdc++.h>
using namespace std;
int main()
{
    string arr,arr2;
    while(getline(cin,arr))
    {
        if(arr=="0")
            break;
        long long int n=arr.size();
        long long int x=0,counter=0,div=0,mod=0,s=0,counter1=0,record=0;

        for(long long int i=0; arr[i]!='\0'; i++)
        {
            s=arr[i];
            s=s-48;
            counter1+=s;
            x+=s;
            while(x<9)
            {
                i++;
                if(arr[i+1]=='\0')
                {
                    counter=1;
                    break;
                }
                x=x*10;
                s=arr[i];
                s=s-48;
                counter1+=s;
                x+=s;
            }
            if(counter==0)
            {
                int ans;
                ans=x%9;
                x=ans;
                x=x*10;
                if((i+1)==n)
                {
                    x=x/10;
                }
            }
        }
        cout<<x<<endl;
        cout<<counter1<<endl;
        if(x!=0)
        {
            cout<<arr<<" is not a multiple of 9."<<endl;
            continue;
        }
        //mod=counter1;
        while(1)
        {
            if(counter1==9)
            {
                record++;
                cout<<arr<<" is a multiple of 9 and has 9-degree "<<record<<endl;
                break;
            }
            int c,a=1,p=0;
            c=counter1;
            while(c!=0)
            {
                a=a*10;
                p++;
                c=c/10;
            }
            a=a/10;
            c=counter1;
            //cout<<"Level "<<p<<endl;

            while(p!=0)
            {
                int f;
                f=counter1/a;
                counter1=counter1%a;
                a=a/10;
                p--;
                switch(f)
                {
                case 0:
                    arr2+='0';
                    break;
                case 1:
                    arr2+='1';
                    break;
                case 2:
                    arr2+='2';
                    break;
                case 3:
                    arr2+='3';
                    break;
                case 4:
                    arr2+='4';
                    break;
                case 5:
                    arr2+='5';
                    break;
                case 6:
                    arr2+='6';
                    break;
                case 7:
                    arr2+='7';
                    break;
                case 8:
                    arr2+='8';
                    break;
                case 9:
                    arr2+='9';
                    break;
                }
            }
            x=0,counter=0,div=0,s=0,counter1=0;
            for(long long int i=0; arr2[i]!='\0'; i++)
            {
                s=arr2[i];
                s=s-48;
                counter1+=s;
                x+=s;
                while(x<9)
                {
                    i++;
                    if(arr[i+1]=='\0')
                    {
                        counter=1;
                        break;
                    }
                    x=x*10;
                    s=arr2[i];
                    s=s-48;
                    counter1+=s;
                    x+=s;
                }
                if(counter==0)
                {
                    int ans;
                    ans=x%9;
                    x=ans;
                    x=x*10;
                    if((i+1)==n)
                    {
                        x=x/10;
                    }
                }
            }
            if(x==0)
            {
                record++;
                continue;
            }
            else
            {
                cout<<arr<<" is a multiple of 9 and has 9-degree "<<record<<endl;
                break;
            }
            arr2="";
        }

    }

}

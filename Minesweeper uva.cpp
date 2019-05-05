#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    long long int counter=0,counter1=-1;
    while(cin>>x>>y)
    {
        counter++;
        if(x==0 && y==0)
            break;
        char arr[x][y];
        int arr1[x][y];
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
                arr1[i][j]=0;
        }
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                cin>>arr[i][j];
            }
        }
        int m=0,n=0,rec=0,rec1=0;

        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(arr[i][j]=='*')
                {
                    if((i-1)>=0)
                    {
                        m=i-1;
                        if((i+1)<x)
                        {
                            n=i+1;
                        }
                        else
                        {
                            n=x-1;
                        }
                    }
                    else
                    {
                       m=0;
                       if((i+1)<x)
                        {
                            n=i+1;
                        }
                        else
                        {
                            n=x-1;
                        }
                    }
                    if((j-1)>=0)
                    {
                        rec=j-1;
                        if((j+1)<y)
                        {
                            rec1=j+1;
                        }
                        else
                        {
                            rec1=y-1;
                        }
                    }
                    else
                    {
                       rec=0;
                       if((j+1)<y)
                        {
                            rec1=j+1;
                        }
                        else
                        {
                            rec1=y-1;
                        }
                    }
                    for(int h1=m;h1<=n;h1++)
                    {
                        for(int h2=rec;h2<=rec1;h2++)
                        {

                            if(h1==i && h2==j || arr[h1][h2]=='*')
                                continue;
                            else
                            {
                                arr1[h1][h2]++;
                            }
                        }
                    }
                }
            }
        }
        if(counter1!=-1)
            cout<<endl;
        counter1++;
        cout<<"Field #"<<counter<<":"<<endl;
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(arr[i][j]=='*')
                {
                    cout<<'*';
                    continue;
                }
                else
                cout<<arr1[i][j];

            }
            cout<<endl;
        }
    }
}

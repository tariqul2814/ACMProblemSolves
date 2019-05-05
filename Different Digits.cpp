
#include <iostream>
using namespace std;
int main()
{
    long long int n,m,counter;
    while(cin>>n>>m)
    {
        counter=0;
        for(long long int i=n;i<=m;i++)
        {
            long long int t = i;
            long long int arr[10];
            long long int counter1=-1;
            while(t!=0)
            {
                counter1++;
                arr[counter1]=t%10;
                t=t/10;
            }
            int rec=0;
            for(int j=0;j<counter1;j++)
            {
                for(int k=j+1;k<=counter1;k++)
                {
                    if(arr[j]==arr[k])
                    {
                        rec=1;
                        break;
                    }
                }
                if(rec==1)
                    break;
            }
            if(rec==0)
                counter++;
        }
        cout<<counter<<endl;
    }
}

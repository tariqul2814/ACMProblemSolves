#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,p,sum;
    p=0;
    string y,y1;
    y="No problem! :D";
    y1="No problem. :(";
    while(cin>>n)
    {
        s=0;
        sum=0;
        if(n<0)
            break;
        sum+=n;
        int arr[12];
        int arr1[12];
        for(int j=0; j<12; j++)
            cin>>arr[j];
        for(int i=0; i<12; i++)
            cin>>arr1[i];
        cout<<"Case "<<p+1<<":"<<endl;
        for(int i=0; i<12; i++)
        {
            if(i!=s)
            {
                sum+=arr[s];
                if(sum>=arr1[i])
                {
                    cout<<y<<endl;
                    sum-=arr1[i];
                }
                else
                    cout<<y1<<endl;
                s++;
            }

            else
            {
                if(sum>=arr1[i])
                {
                    cout<<y<<endl;
                    sum-=arr1[i];
                }
                else
                    cout<<y1<<endl;
            }
        }
        p++;
    }
    return 0;
}

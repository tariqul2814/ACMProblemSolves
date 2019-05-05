#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(int j=0; j<n; j++)
        {
            int arr[5];
            int rec;
            char x;
            int black=0,white=0;
            for(int i=0; i<5; i++)
            {
                int a;
                cin>>a;
                arr[i]=a;
                if(a<=127)
                    black++;
                else if(a>127 && a<=255)
                    white++;
            }
            if(black>1 || white==5)
                cout<<"*"<<endl;
            else
            {
                for(int i=0; i<5; i++)
                {
                    if(arr[i]<=127)
                    {
                        rec=i+1;
                        rec=rec+64;
                        break;
                    }
                }
                x=rec;
                cout<<x<<endl;
            }
        }


    }
}

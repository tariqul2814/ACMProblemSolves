#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int p,q;
        scanf("%d %d",&p,&q);
        if(i>0)cout<<endl;
        for(int h=1; h<=q; h++)
        {
            for(int j=1; j<=p; j++)
            {
                for(int k=1; k<=j; k++)
                {
                    cout<<j;
                }
                cout<<endl;
            }
            for(int j=p-1; j>=1; j--)
            {
                for(int k=1; k<=j; k++)
                {
                    cout<<j;
                }
                cout<<endl;
            }
            if(h!=q)
            cout<<endl;
        }
    }
    return 0;
}

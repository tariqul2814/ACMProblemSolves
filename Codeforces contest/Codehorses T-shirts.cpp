#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string n1[n];
    string n2[n];
    for(int i=0;i<n;i++)
    {
        cin>>n1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>n2[i];
    }
    int counter=0,counter1=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        counter1=0;
        for(int j=0;j<n;j++)
        {
            if(n2[j]=="-1")
                continue;
            if(n1[i]==n2[j])
            {
                n2[j]="-1";
                counter1=1;
                break;
            }
        }
        if(counter1==0)
        {
            counter++;
        }

    }
    cout<<counter<<endl;
}

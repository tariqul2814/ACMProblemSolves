#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    cin.ignore();
    int counter=-1;
    for(int i=0;i<n;i++)
    {
        string p;
        getline(cin,p);
        int sizen=p.size();
        //cout<<sizen<<endl;
        if(sizen==4)
        {
            if(p=="Test")
            {
                if(counter>-1)
                cout<<arr[counter]<<endl;
                else
                {
                    cout<<"Not in a dream"<<endl;
                }
            }
            else if(p=="Kick")
            {
                if(counter>-1)
                {
                    arr[counter]="-";
                    counter--;
                }
            }
        }
        else
        {
            counter++;
            string h="";
            for(int j=6;j<sizen;j++)
            {
                h+=p[j];
            }
            arr[counter]=h;
        }
    }
}

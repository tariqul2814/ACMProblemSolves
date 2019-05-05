#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int counter=0;
        int x;
        cin>>x;
        cin.ignore();
        string arr[x];
        for(int j=0;j<x;j++)
        {
            getline(cin,arr[j]);
        }
        for(int j=0;j<x;j++)
        {
            string xx="",nn="";
            int sizen=0;
            //cout<<arr[j]<<endl;
            sizen=arr[j].size();
            nn=arr[j];
            int counter2=0;
            //cout<<sizen<<endl;
            for(int k=0;k<sizen;k++)
            {
                if(nn[k]>='A' && nn[k]<='Z')
                {
                    xx+=nn[k];
                    counter2=1;
                }
                else if(nn[k]>='0' && nn[k]<='9')
                {
                    xx+=nn[k];
                }
                else if(nn[k]==' ' && counter2==1)
                {
                    xx+=nn[k];
                }
            }
            arr[j]=xx;
            if(arr[j]=="LEFT")
            {
                    //cout<<"LEFT"<<endl;
                counter--;
            }
            else if(arr[j]=="RIGHT")
            {
                    //cout<<"RIGHT"<<endl;
                counter++;
            }
            else
            {
                int x1=0;
                x1=j;
                while(1)
                {
                    xx=arr[x1];
                    //cout<<xx<<endl;
                    if(xx=="RIGHT" || xx=="LEFT")
                    {
                        if(xx=="LEFT")
                        {
                            counter--;
                        }
                        else if(xx=="RIGHT")
                        {
                            counter++;
                        }
                        break;
                    }
                    string h;
                    int sizenn;
                    sizenn=xx.size();
                    for(int k=8;k<sizenn;k++)
                    {
                        h+=xx[k];
                    }
                    sizenn=h.size();
                    x1=0;
                    for(int i=0;i<sizenn;i++)
                    {
                        int d;
                        d=h[i];
                        d=d-48;
                        x1+=d;
                        x1=x1*10;
                    }
                    x1/=10;
                    x1--;
                    //cout<<x1<<endl;
                }
            }
        }
        cout<<counter<<endl;
    }
}

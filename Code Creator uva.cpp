#include <iostream>
using namespace std;
int main()
{
    int t,record=0;
    while(cin>>t)
    {
        if(t==0)
            break;
        cin.ignore();
        string n[t];
        int j=0;
        for(int i=0;i<t;i++)
        {
            getline(cin,n[i]);
        }
        record++;
        cout<<"Case "<<record<<":"<<endl;
        cout<<"#include<string.h>\n#include<stdio.h>\nint main()\n{"<<endl;
        for(int i=0;i<t;i++)
        {
            cout<<"printf(\"";
            string k;
            k=n[i];
            int sizen;
            sizen=k.size();
            for(int j=0;j<sizen;j++)
            {
                if(k[j]=='"' || k[j]=='\\')
                {
                    cout<<"\\";
                    cout<<k[j];
                }
                else
                cout<<k[j];
            }
            cout<<"\\n\");"<<endl;

        }
        cout<<"printf(\"\\n\");"<<endl;
        cout<<"return 0;"<<endl;
        cout<<"}"<<endl;
    }
    return 0;
}

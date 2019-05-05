#include <iostream>
using namespace std;
int main()
{
    string n;
    while(getline(cin,n))
    {
        long long int size1=n.size();
        string nn;
        for(long long int i=0; i<size1; i++)
        {
            nn="";
            if(n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U' || n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u')
            {
                string x="";
                while(1)
                {
                    //cout<<"I am in"<<endl;
                    int number=n[i];
                    if(i>=size1 || number>=32 && number<=64 || number>=91 && number<=96 || number>=123 && number<=126)
                    {
                        i--;
                        break;
                    }
                    else
                    {
                        nn+=n[i];
                        i++;
                    }
                }
                nn+="ay";
                cout<<nn;
            }
            else if(n[i]>='A' && n[i]<='Z' || n[i]>='a' && n[i]<='z')
            {
                string x="";
                x=n[i];
                i++;
                while(1)
                {
                    //cout<<"I am in"<<endl;
                    int number=n[i];
                    if(i>=size1 || number>=32 && number<=64 || number>=91 && number<=96 || number>=123 && number<=126)
                    {
                        i--;
                        break;
                    }
                    else
                    {
                        nn+=n[i];
                        i++;
                    }
                }
                nn+=x;
                nn+="ay";
                cout<<nn;
            }

            else
            {
                cout<<n[i];
            }
        }
        cout<<endl;
    }
}

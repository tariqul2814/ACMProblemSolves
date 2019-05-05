#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int size1,size2;
    size1=a.size();
    size2=b.size();
    if(size1<size2 || size1<size2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int counter=0;
        int rec=0;
        int recorder=0;
        int i=0;
        for(int j=0; j<size1; j++)
        {
            counter=0;
            if(b[i]!=a[j])
            {
                for(int k=j+1; k<size1; k++)
                {
                    if(a[k]==b[i] && b[k]==a[j])
                    {
                        recorder++;
                        rec=1;
                        char hh = a[j];
                        a[j]=a[k];
                        a[k]=hh;
                        counter=1;
                        break;
                    }
                }
                if(counter==0)
                {
                    break;
                }
            }
            i++;
        }
        if(a==b && rec==1 && recorder==1)
            cout<<"YES"<<endl;
        else if(rec==0 || counter==0)
        {
            cout<<"NO"<<endl;
        }

    }
}

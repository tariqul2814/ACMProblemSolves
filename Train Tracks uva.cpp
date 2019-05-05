#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    cin.ignore();
    for(long long i=0; i<n; i++)
    {
        string input;
        string org="";
        getline(cin,input);
        long long int sizeinput;
        int counter=0;
        sizeinput = input.size();
        int counter1=0;
        for(long long int j=0; j<sizeinput; j++)
        {
            if(input[j]==' ')
            {
                while(input[j]==' ')
                {
                    j++;
                }
                j--;
            }
            else if(input[j]!=' ')
            {
                org+=input[j];
                j++;
                org+=input[j];
            }
        }
        sizeinput = org.size();
        string org1="";
        long long int countermale = 0 , counterfemale = 0;
        if(sizeinput==2)
        {
            counter=1;
        }
        else
        {
            for(long long int i=0;i<sizeinput;i++)
            {
                if(org[i]=='M')
                {
                    if(org[i+1]=='M')
                    {
                        countermale++;
                        i++;
                        continue;
                    }
                    else
                    {
                        i++;
                        continue;
                    }
                }
                else if(org[i]=='F')
                {
                    if(org[i+1]=='F')
                    {
                        counterfemale++;
                        i++;
                        continue;
                    }
                    else
                    {
                        i++;
                        continue;
                    }
                }
            }
        }
        if(counter==1)
        {
            cout<<"NO LOOP"<<endl;
        }
        else
        {
            if(counterfemale==countermale)
            {
                cout<<"LOOP"<<endl;
            }
            else
                cout<<"NO LOOP"<<endl;
        }
    }
}

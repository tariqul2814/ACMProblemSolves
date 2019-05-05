#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        cin.ignore();
        string input;
        getline(cin,input);
        int sizen = input.size();
        int counter=0;
        int counter1=0;

        counter1=sizen/n;


        string input1="";
        string input2="";

        int i,j;
        for(i=0; i<sizen; i++)
        {
            for(int j=0; j<counter1 && j<sizen; j++,i++)
            {
                input2+=input[i];
            }
            i--;
            //cout<<"Hi"<<endl;
            reverse(input2.begin(),input2.end());
            //cout<<input<<endl;
            input1+=input2;
            input2="";
        }


        cout<<input1<<endl;

    }
}

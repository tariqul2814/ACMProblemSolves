#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    getline(cin,input);
    int sizeinput;
    sizeinput=input.size();
    int counter=0;
    for(int i=0;i<sizeinput;i++)
    {
        if((i+2)<sizeinput)
        {
            if(input[i]=='A' && input[i+1]=='B' && input[i+2]=='C')
            {
                counter++;
                break;
            }
            else if(input[i]=='A' && input[i+1]=='C' && input[i+2]=='B')
            {
                counter++;
                break;
            }
            else if(input[i]=='B' && input[i+1]=='A' && input[i+2]=='C')
            {
                counter++;
                break;
            }
            else if(input[i]=='B' && input[i+1]=='C' && input[i+2]=='A')
            {
                counter++;
                break;
            }
            else if(input[i]=='C' && input[i+1]=='A' && input[i+2]=='B')
            {
                counter++;
                break;
            }
            else if(input[i]=='C' && input[i+1]=='B' && input[i+2]=='A')
            {
                counter++;
                break;
            }

        }
    }
    if(counter!=0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

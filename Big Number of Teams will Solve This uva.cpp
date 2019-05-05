#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   cin.ignore();
   for(int i=0;i<n;i++)
   {
       string input;
       getline(cin,input);
       string inputjudge;
       getline(cin,inputjudge);
       int counter=0,counter1=0;
       long long int sizen = input.size();
       if(input==inputjudge)
       {
           cout<<"Case "<<i+1<<":"<<" Yes"<<endl;
       }
       else
       {
           long long int j=0;
           for(long long int z=0;z<sizen;z++)
           {
               if(input[z]==' ')
               {
                   continue;
               }
               else if(inputjudge[j]==input[z])
               {
                   //cout<<input[z]<<endl;
                   counter++;
                   j++;
               }
               else
               {
                   counter1++;
               }

           }
           if(counter==inputjudge.size() && counter1==0)
           {
               cout<<"Case "<<i+1<<":"<<" Output Format Error"<<endl;
           }
           else
           {
               cout<<"Case "<<i+1<<":"<<" Wrong Answer"<<endl;
           }
       }
   }

}

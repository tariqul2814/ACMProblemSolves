#include <iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    cin.ignore();
    string n;
    getline(cin,n);
    string xx;
    xx+=n[0];
    char xx1;
    xx1=n[0];
    for(int x=1;x<i;x++)
    {
        if(n[x]=='a' || n[x]=='e' || n[x]=='i' ||n[x]=='o' ||n[x]=='u' ||n[x]=='y')
        {
            if(xx1=='a' || xx1=='e' || xx1=='i' ||xx1=='o' ||xx1=='u' ||xx1=='y')
            {

            }
            else
            {
                xx1=n[x];
                xx+=n[x];
            }
        }
        else
        {
            xx1=n[x];
            xx+=n[x];
        }
    }
    cout<<xx<<endl;
}

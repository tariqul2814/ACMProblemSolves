#include <iostream>
using namespace std;
int main()
{
    long long int counter=0;
    cin>>counter;
    for(long long int i=0;i<counter;i++)
    {
        long double radious=0,length=0,width=0,lengthright=0,lengthleft=0,widthhalf = 0;
        cin>>radious;
        if(radious==20)
        {
            length = 100;
            lengthright = 100 * 0.55;
            lengthleft = 100 - lengthright;
            width = 100 * 0.6;
            widthhalf = width/2;
        }
        else
        {
            length = (100/20)*radious;
            lengthright = length * 0.55;
            lengthleft = length - lengthright;
            width = length * 0.6;
            widthhalf = width / 2;
        }
        cout<<"Case "<<i+1<<":"<<endl;
        cout<<"-"<<lengthleft<<" "<<widthhalf<<endl;
        cout<<lengthright<<" "<<widthhalf<<endl;
        cout<<lengthright<<" -"<<widthhalf<<endl;
        cout<<"-"<<lengthleft<<" -"<<widthhalf<<endl;
    }
}

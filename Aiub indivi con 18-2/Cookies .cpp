#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int counter=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            counter++;
    }
    if(counter==0)
        cout<<1<<endl;
    else
        cout<<counter<<endl;
}

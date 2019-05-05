#include <bits/stdc++.h>
using namespace std;
long long int n;
long long int arr[1000000];
int main()
{
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int counter=0;
    long long int me = 1;
    long long int friend1 = 1000000;
    for(long long int i=0;i<n;i++)
    {
        if(abs(arr[i]-me)<abs(friend1-arr[i]))
        {
            counter+=abs(arr[i]-me);
            me = arr[i];

        }
        else if(abs(arr[i]-me)>abs(friend1-arr[i]))
        {
            counter+=abs(friend1-arr[i]);
            me = arr[i];
        }
    }
    cout << counter <<endl;
}

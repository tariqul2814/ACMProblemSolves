#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vc;
    long long int x,y;
    cin>>x>>y;
    for(long long int i=0; i<x; i++)
    {
        long long int f;
        cin>>f;
        vc.push_back(f);
    }
    for(long long int i=0; i<y; i++)
    {
        long long int f;
        cin>>f;
        if(binary_search(vc.begin(), vc.end(), f) == false)
        {
            cout << -1 <<endl;
        }
        else
        {
            cout << find(vc.begin(), vc.end(), f) - vc.begin()<<endl;
        }
    }
}

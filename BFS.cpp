#include <bits/stdc++.h>
using namespace std;
int arr1[7];
void connectedge(vector<int> v[],int m,int n)
{
    v[m].push_back(n);
    v[n].push_back(m);
}
void bfs(vector<int>v[],int start)
{
    int arr[7];

    memset(arr,0,sizeof(arr));
    memset(arr,0,sizeof(arr1));
    queue<int>n;
    n.push(start);
    while(!n.empty())
    {
        int s = n.front();
        arr[s] = 1;
        for(int i=0;i<v[s].size();i++)
        {
            int h = v[s][i];
            if(arr[h]==0)
            {
                arr[h]=1;
                arr1[h]=arr1[s]+1;
                n.push(h);
            }
        }
        cout<<s<<endl;
        n.pop();
    }
}
int main()
{
    int size=7;
    vector<int>v[size];
    connectedge(v,1,2);
    connectedge(v,1,3);
    connectedge(v,2,4);
    connectedge(v,3,6);
    connectedge(v,3,5);
    connectedge(v,6,5);
    connectedge(v,4,6);

    bfs(v,1);

    cout<<"Hello"<<endl;
    for(int i=1;i<7;i++)
        cout<<arr1[i]<<endl;
}

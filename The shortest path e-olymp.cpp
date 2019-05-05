#include <bits/stdc++.h>
using namespace std;

void connectnode(vector<int>vc[],int a,int b)
{
    vc[a].push_back(b);
    vc[b].push_back(a);
}

void BFS(vector<int>vc[],int start,int visited[],int parant[],int shortest[])
{
    parant[start]=-1;
    visited[start]=1;
    queue<int>myqueue;
    myqueue.push(start);
    while(!myqueue.empty())
    {
        int first = myqueue.front();
        int sizevc = vc[first].size();
        for(int i=0;i<sizevc;i++)
        {
            int p = vc[first][i];
            if(visited[p]==0)
            {
                parant[p]=first;
                myqueue.push(p);
                shortest[p]=shortest[first]+1;
                //cout<<p<<" "<<shortest[p]<<endl;
                visited[p]=1;
            }
        }
        myqueue.pop();
    }
}

int main()
{
    int node,edge;
    cin>>node>>edge;
    vector<int>vc[node+1];
    int visited[node+1];
    int parant[node+1];
    int shortest[node+1];
    memset(visited,0,sizeof(visited));
    memset(parant,0,sizeof(parant));
    memset(shortest,0,sizeof(shortest));
    int a,b;
    cin>>a>>b;
    for(int i=0;i<edge;i++)
    {
        int n,m;
        cin>>n>>m;
        connectnode(vc,n,m);
    }
     BFS(vc,a,visited,parant,shortest);

    int i=b;
    if(parant[b]!=0 && parant[a]!=0)
    {
        int h = shortest[b];
        cout<<h<<endl;
        int arr[h];
        int j=0;
        while(parant[i]!=-1)
        {
            //cout<<parant[i]<<endl;
            arr[j]=parant[i];
            i=parant[i];
            j++;
        }
        for(int i=h-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<b<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}

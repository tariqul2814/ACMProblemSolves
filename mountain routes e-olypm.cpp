#include <bits/stdc++.h>
using namespace std;
int visited[1000];
int path[1000][1000];
int counter=0;

void DFS(int node,int cost,int sizen,int visit,int limit)
{
    visited[node]=1;
    int rec = 0;
    if(node==visit && cost<=limit)
    {
        counter++;
        //cout<<" cost: "<<cost;
        rec=1;
    }
    if(rec==0)
    {
        for(int i=1;i<=sizen;i++)
        {
            if(path[node][i]==1)
            {
                if(visited[i]==0)
                {
                    DFS(i,cost+1,sizen,visit,limit);
                }
            }
        }

    }
    visited[node]=0;

}
int main()
{
    int n,k,a,b,d;
    counter=0;
    cin>>n>>k>>a>>b>>d;
    memset(visited,0,sizeof(visited));
    memset(path,0,sizeof(path));
    for(int i=0;i<k;i++)
    {
        int p,q;
        cin>>p>>q;
        path[p][q]=1;
    }
    //void DFS(int node,int cost,int sizen,int visit)
    DFS(a,0,n,b,d);
    cout<<counter<<endl;


}

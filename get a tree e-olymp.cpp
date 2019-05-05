#include <bits/stdc++.h>
using namespace std;
void addedge(vector<int>v[],long long int a,long long int b)
{
    v[a].push_back(b);
    v[b].push_back(a);
}
void DFS(long long int visited[],vector<int>v[])
{
    stack<int>st;
    st.push(1);
    visited[1]=1;
    while(!st.empty())
    {
        long long int t = st.top();
        long long int siz = v[t].size();
        int counter=0;
        int recorder = 0;
        for(long long int i=0;i<siz;i++)
        {
            long long int get = v[t][i];
            if(visited[get]==0)
            {
                recorder = get;
                counter = 1;
                break;
            }
        }
        if(counter==0)
        {
            st.pop();
        }
        else
        {
            cout<<t<<" "<<recorder<<endl;
            visited[recorder]=1;
            st.push(recorder);
        }
    }
}
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int arr[n+1];
    long long int visited[n+1];
    memset(visited,0,sizeof(visited));
    vector<int>vec[n+1];
    for(long long int i=0;i<m;i++)
    {
        long long int a,b;
        cin>>a>>b;
        addedge(vec,a,b);
    }
    DFS(visited,vec);

}

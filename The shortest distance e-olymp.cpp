#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int recover = n+1;
    int arr[recover][recover];
    int shortest[recover];
    for(int i=1;i<recover;i++)
    {
        for(int j=1;j<recover;j++)
        {
            cin>>arr[i][j];
        }
    }
    queue<int>myqueue;

    int visited[recover];
    memset(visited,0,sizeof(visited));
    memset(shortest,0,sizeof(shortest));
    myqueue.push(m);
    visited[myqueue.front()]=1;

    while(!myqueue.empty())
    {
        int q = myqueue.front();
        for(int a = 1; a<recover ; a++)
        {
            if(arr[q][a]==0)
                continue;
            else
            {
                if(visited[a]==0)
                {

                    myqueue.push(a);
                    visited[a]=1;
                    shortest[a]=shortest[q]+1;
                    //cout<<"FRONT: "<<myqueue.front()<<endl;
                }
            }
        }
        myqueue.pop();
    }
    for(int i=1;i<recover;i++)
    {
        if(visited[i]==1)
        cout<<shortest[i];
        else
        cout<<-1;
        if(i<recover-1)
        {
            cout<<" ";
        }
        else
            cout<<endl;
    }


}

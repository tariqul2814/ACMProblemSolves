#include <bits/stdc++.h>
using namespace std;
void connect_edge(vector<int>v[],int i,int j)
{
    v[i].push_back(j);
    v[j].push_back(i);

}
void BFS(vector<int>v[],int parant[],int visited[],int shortest[],int start)
{
    queue<int>myqueue;
    myqueue.push(start);
    visited[start]=1;
    parant[start]=-1;
    while(!myqueue.empty())
    {
        int first = myqueue.front();
        int sizen=v[first].size();
        for(int i=0;i<sizen;i++)
        {
            int second=v[first][i];
            if(visited[second]==0)
            {
                visited[second]=1;
                parant[second]=first;
                shortest[second]=shortest[second]+shortest[first];
                myqueue.push(second);
            }
        }
        myqueue.pop();
    }
}
int main()
{
    queue<int>myqueue;
    int n;
    int start;
    int finish;
    cin>>n;
    cin.ignore();
    int m = n*n;
    vector<int>v[m+1];
    int parant[m+1];
    int visited[m+1];
    int shortest[m+1];
    memset(parant,0,sizeof(parant));
    memset(visited,0,sizeof(visited));
    memset(shortest,0,sizeof(shortest));
    char input[m+1];
    int counter=n;
    for(int i=1;i<=m;i++)
    {
        cin>>input[i];
    }

    for(int i=1;i<=m;i++)
    {
        if(input[i]=='X')
            start=i;
        if(input[i]=='@')
            finish=i;
        if(i>counter)
        {
            i--;
            counter=counter+n;
            continue;
        }
        if((i+1)<=counter)
        {
            if(input[i]=='.' || input[i]=='@' || input[i]=='X')
                if(input[i+1]=='.' || input[i+1]=='@' || input[i+1]=='X')
                                connect_edge(v,i,i+1);
        }
        if((i+n)<(m+1))
        {
            if(input[i]=='.' || input[i]=='@' || input[i]=='X')
                if(input[i+n]=='.' || input[i+n]=='@' || input[i+n]=='X')
                            connect_edge(v,i,i+n);
        }
    }
    //cout<<"Start-> "<<start<<endl;
    BFS(v,parant,visited,shortest,start);
    int counter1=n;

    int i=finish;
    int recorder=0;
    input[start]='+';
    input[finish]='+';
    while(1)
    {
        if(parant[i]==start)
        {
            recorder=1;
            break;
        }
        else if(parant[i]==0 || parant[i]==-1)
            break;
        else
        {
            i=parant[i];
            input[i]='+';
            continue;
        }
    }
    //cout<<recorder<<endl;
    //cout<<endl;
    if(recorder==1)
    {
        cout<<"Y"<<endl;
        //cout<<start<<endl;
        int counter2=n;
        for(int i=1;i<=m;i++)
        {
            if(i>counter2)
            {
                i--;
                cout<<endl;
                counter2=counter2+n;
            }
            else
            cout<<input[i];
        }
        //input[start]='+';
    }
    else
        cout<<"N"<<endl;


}

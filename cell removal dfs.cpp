#include <bits/stdc++.h>
using namespace std;
char input[150][150];
char visited[150][150];


void DFS(int i,int j,int n,int m)
{
    queue< pair<int,int> > mystack;
    mystack.push(make_pair(i,j));
    visited[i][j]=1;
    while(!mystack.empty())
    {
        pair<int,int>mytop = mystack.front();
        int a,b;
        a = mytop.first;
        b = mytop.second;
        //<<"a->"<<a<<" "<<"b-> "<<b<<endl;
        int x,y;
        x = a-1;
        y = b;
        if((x>=0 && x<n) && (y>=0 && y<m) && visited[x][y]==0 && input[x][y]=='#')
        {
            visited[x][y]=1;
            mystack.push(make_pair(x,y));
        }
        x = a+1;
        y = b;
        if((x>=0 && x<n) && (y>=0 && y<m) && visited[x][y]==0 && input[x][y]=='#')
        {
            visited[x][y]=1;
            mystack.push(make_pair(x,y));
        }
        x = a;
        y = b-1;
        if((x>=0 && x<n) && (y>=0 && y<m) && visited[x][y]==0 && input[x][y]=='#')
        {
            visited[x][y]=1;
            mystack.push(make_pair(x,y));
        }
        x = a;
        y = b+1;
        if((x>=0 && x<n) && (y>=0 && y<m) && visited[x][y]==0 && input[x][y]=='#')
        {
            visited[x][y]=1;
            //<<"Push "<<endl;
            //<<x<<" "<<y<<endl;
            mystack.push( make_pair(x,y) );

            //<<"Top "<<pair1.first<<" "<<pair1.second<<endl;
        }
        mystack.pop();
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    memset(visited,0,sizeof(visited));
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>input[i][j];
        }
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(input[i][j]=='#' && visited[i][j]==0)
            {
                //<<i<<" "<<j<<endl;
                DFS(i,j,n,m);
                //<<"Done"<<endl;
                counter++;
            }

        }
    }
    cout<<counter<<endl;
}

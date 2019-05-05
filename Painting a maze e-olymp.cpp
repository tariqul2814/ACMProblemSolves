#include <bits/stdc++.h>
using namespace std;


char arr[1000][1000];
int visited[1000][1000];

int BFS(int n,int p,int q)
{
    queue< pair<int,int> >myqueue;
    pair<int,int>mypair(p,q);
    myqueue.push(mypair);
    int counter=0;
    visited[p][q]=1;
    while(!myqueue.empty())
    {
        pair<int,int>mypair1=myqueue.front();
        int a,b;
        a=mypair1.first;
        b=mypair1.second;
        int temp1,temp2;
        temp1=a-1;
        temp2=b;

        if(temp1>=0 && temp1<n && visited[temp1][temp2]==0 && arr[temp1][temp2]=='.')
        {

                myqueue.push(make_pair(temp1,temp2));
                visited[temp1][temp2]=1;
        }
        else if(temp1<0 || temp1>=n || temp2<0 || temp2>=n ||arr[temp1][temp2]=='#')
        {
            counter++;
        }
        temp1=a+1;
        temp2=b;

        if(temp1>=0 && temp1<n && visited[temp1][temp2]==0 && arr[temp1][temp2]=='.')
        {

            myqueue.push(make_pair(temp1,temp2));
                //counter++;
            visited[temp1][temp2]=1;
        }

        else if(temp1<0 || temp1>=n || temp2<0 || temp2>=n ||arr[temp1][temp2]=='#')
        {
            counter++;
        }
        temp1=a;
        temp2=b+1;

        if(temp2>=0 && temp2<n && visited[temp1][temp2]==0 && arr[temp1][temp2]=='.')
        {

            myqueue.push(make_pair(temp1,temp2));
            //counter++;
            visited[temp1][temp2]=1;
        }

        else if(temp1<0 || temp1>=n || temp2<0 || temp2>=n || arr[temp1][temp2]=='#')
        {
            counter++;
        }
        temp1=a;
        temp2=b-1;

            if(temp2>=0 && temp2<n && visited[temp1][temp2]==0 && arr[temp1][temp2]=='.')
            {
                myqueue.push(make_pair(temp1,temp2));
                //counter++;
                visited[temp1][temp2]=1;
            }

        else if(temp1<0 || temp1>=n || temp2<0 || temp2>=n || arr[temp1][temp2]=='#')
        {
            counter++;
        }
        myqueue.pop();
    }
    return counter;
}

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    memset(visited,0,sizeof(visited));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int counter=0;
    int counter1=BFS(n,0,0);
    if(visited[n-1][n-1]==1)
    cout<<(counter1-4)*9<<endl;
    else
    {
        //cout<<counter1<<endl;
        if(counter1>=0)
        counter1=counter1-2;
        else
            counter1=0;
        counter=BFS(n,n-1,n-1);
        //cout<<counter<<endl;
        if(counter>=0)
        counter=counter-2;
        else
            counter=0;

        cout<<(counter+counter1)*9<<endl;
    }
}

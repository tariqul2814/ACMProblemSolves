#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>myqueue;
    myqueue.push(5);
    myqueue.push(6);
    myqueue.push(7);
    cout<<myqueue.front()<<endl;
    myqueue.pop();
    cout<<myqueue.front()<<endl;
    myqueue.pop();
    cout<<myqueue.front()<<endl;
    myqueue.pop();

}

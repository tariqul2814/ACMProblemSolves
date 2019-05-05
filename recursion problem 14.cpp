#include <bits/stdc++.h>
using namespace std;
int recur(int searchnum,int arr[],int first,int last)
{
    int mid;
    mid=(first+last)/2;
    if(first>last)
    {
        return -1;
    }
    else if(arr[mid]==searchnum)
        return mid;
    else if(arr[mid]>searchnum)
    {
        last=mid-1;
        return recur(searchnum,arr,first,last);
    }
    else if(arr[mid]<searchnum)
    {
        first=mid+1;
        return recur(searchnum,arr,first,last);
    }
}
int main()
{
   int arr[5]={1,2,3,4,5};
   int x;
   x=recur(10,arr,0,4);
   if(x==-1)
    cout<<"Not Found"<<endl;
   else
    cout<<"Found "<<x<<endl;
}

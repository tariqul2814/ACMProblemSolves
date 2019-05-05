#include <bits/stdc++.h>
using namespace std;
int recur(int i,int arr[],int counter,int record,int range)
{
    if(i>=range)
        return 0;
    int x,y;
    if(counter==0)
    {
        x=arr[i];
        y=recur(i+1,arr,counter,record,range);
        if(x>y && i!=0)
        {
            return x;
        }
        else if(x<=y && i!=0)
        {
            return y;
        }
        else if(i==0)
        {
            if(x>=y)
            {
                i=0;
                if(record==arr[i])
                i++;
                if(i>=range)
        return 0;
                int m,n;
                m=arr[i];
                n=recur(i,arr,1,x,range);
                if(m>n)
                    return m;
                else
                    return n;
            }
            else
            {
              i=0;
                if(record==arr[i])
                i++;
                if(i>=range)
        return 0;
                int m,n;
                m=arr[i];
                n=recur(i,arr,1,y,range);
                if(m>n)
                    return m;
                else
                    return n;
            }
        }
    }
    else if(counter==1)
    {
        if(record==arr[i])
            i++;
        if(i>=range)
        return 0;
        x=arr[i];
        y=recur(i+1,arr,1,record,range);
        if(x>=y)
           return x;
        else
            return y;
    }
}
int main()
{
   int arr[]={10,2,5,4,3,6,7,100};
   cout<<recur(0,arr,0,0,8)<<endl;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n=n*2;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            int j=i;
            j++;
            for(;j<n;j++)
            {
                int recorder=0;
                if(arr[i]==arr[j])
                {
                    recorder=1;
                    for(int k=j;k>i+1;k--)
                    {
                        int temp;
                        temp=arr[k];
                        arr[k]=arr[k-1];
                        arr[k-1]=temp;
                        counter++;
                    }
                }
                if(recorder==1)
                {
                    i++;
                     break;
                }

            }
        }
        else if(arr[i]==arr[i+1])
        {
            i++;
        }
    }
    cout<<counter<<endl;
}

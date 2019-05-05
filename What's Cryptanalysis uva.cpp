#include <bits/stdc++.h>
using namespace std;
int main()
{
    string A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    long long int arr[26];
    long long int arr1[26];
    for(int i=0;i<26;i++)
    {
        arr[i]=0;
        arr1[i]=0;
    }
    long long int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string input;
        getline(cin,input);
        int size = input.size();
        for(int j=0;j<size;j++)
        {
            if(input[j]>='A' && input[j]<='Z')
            {
                int k = input[j];
                k=k-65;
                arr[k]++;
                arr1[k]++;
            }
            else if(input[j]>='a' && input[j]<='z')
            {
                int k = input[j];
                k=k-32;
                k=k-65;
                arr[k]++;
                arr1[k]++;
            }
        }

    }
    sort(arr1, arr1+26, greater<long long int>());
        for(int i=0;i<26;i++)
        {
            if(arr1[i]==0)
                break;
            for(int j=0;j<26;j++)
            {
                if(arr[j]==-1)
                {
                    continue;
                }
                if(arr1[i]==arr[j])
                {
                    cout<<A[j]<<" "<<arr[j]<<endl;
                    arr[j]=-1;
                    break;
                }
            }
        }

}

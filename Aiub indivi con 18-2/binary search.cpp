#include <bits/stdc++.h>

using namespace std;

long long int arr[100000000];
long long int p;

int main()
{
    int n,q;
    scanf("%d", &n);
    scanf("%d", &q);

    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }

    for(int i=0;i<q;i++)
    {

        scanf("%lld", &p);
        int first=0;
        int last=n-1;
        int middle=(first+last)/2;
        int counter = 0;

        while(first<=last)
        {
            //cout<<arr[middle]<<endl;
            if(arr[middle]==p)
            {
                counter=1;
                for(;middle>=0;middle--)
                {
                    if(arr[middle]==p)
                    {
                        continue;
                    }
                    else
                        break;
                }
                break;
            }

            else if(p>arr[middle])
            {
                first = middle + 1;
                middle = (first+last)/2;

            }
            else if(p<arr[middle])
            {

                last = middle - 1;
                middle = (first+last)/2;

            }
        }


        if(counter==0)
            printf("-1\n");

        else
        {
            printf("%d\n",middle+1);
            //cout<<middle<<endl;
        }

    }
    return 0;

}

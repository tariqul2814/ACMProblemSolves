#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    int sum = 0;

    cin.ignore();

    for(int i=0;i<n;i++)
    {
        string input;
        getline(cin,input);

        if(input[0]=='+' || input[0]=='-')
        {
            if(input[0]=='+')
            {
                sum++;
            }
            else
                sum--;
        }

        else if(input[2]=='+' || input[2]=='-')
        {
            if(input[2]=='+')
            {
                sum++;
            }
            else
                sum--;
        }
    }

    printf("%d\n",sum);
}

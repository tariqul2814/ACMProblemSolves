#include <bits/stdc++.h>
using namespace std;
void recur()
{
    char ch;
    scanf("%c",&ch);
    if(ch !='\n')
    {
        recur();
    }
    printf("%c",ch);
}
int main()
{
   recur();
}

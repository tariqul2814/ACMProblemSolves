#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[12]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    int arr1[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    //int arrweek[5][7];
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string month,day;
        cin>>month;
        cin>>day;
        int j=0;
        for(;j<12;j++)
        {
            if(arr[j]==month)
            {
                break;
            }
        }
        //cout<<"Month: "<<month<<" "<<j<<endl;
        int rec=arr1[j];
        //cout<<rec<<endl;
        int rec1=1;
        for(j=0;j<7;j++)
        {
            if(week[j]==day)
            {
                break;
            }
        }
        int k=0;
        int counter=0;
        rec1=1;
        int local=5;
        if(j<=5)
        {

            local=5;
            rec1=5-j;
            rec1++;
        }
        else if(j==6)
        {
            local=6;
            rec1=6-j;
            rec1++;
        }
        while(rec1<=rec)
        {
            if(local==5)
            {
                local++;
                counter++;
                rec1++;
               // cout<<rec1<<endl;
            }
            else if(local==6)
            {
                counter++;
                rec1+=6;
                local=5;
               // cout<<rec1<<endl;
            }
        }
        cout<<counter<<endl;

    }

}

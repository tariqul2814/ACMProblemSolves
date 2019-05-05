#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        string x;
        int arr[p];
        int arr1[p];
        for(int j=0;j<p;j++)
        {
            cin>>arr[j];
        }
        for(int j=0;j<p;j++)
        {
            cin>>arr1[j];
        }

        for(int j=0;j<p;j++)
        {
            int s,w;
            s=arr[j];
            w=arr1[j];
            switch(s)
            {
            case 1:
                if(w==1)
                    x+=".";
                else if(w==2)
                    x+=",";
                else if(w==3)
                    x+="?";
                else if(w==4)
                    x+="\"";
                break;
            case 2:
                if(w==1)
                    x+="a";
                else if(w==2)
                    x+="b";
                else if(w==3)
                    x+="c";
                break;
            case 3:
                if(w==1)
                    x+="d";
                else if(w==2)
                    x+="e";
                else if(w==3)
                    x+="f";
                break;
            case 4:
                if(w==1)
                    x+="g";
                else if(w==2)
                    x+="h";
                else if(w==3)
                    x+="i";
                break;
            case 5:
                if(w==1)
                    x+="j";
                else if(w==2)
                    x+="k";
                else if(w==3)
                    x+="l";
                break;
            case 6:
                if(w==1)
                    x+="m";
                else if(w==2)
                    x+="n";
                else if(w==3)
                    x+="o";
                break;
            case 7:
                if(w==1)
                    x+="p";
                else if(w==2)
                    x+="q";
                else if(w==3)
                    x+="r";
                else if(w==4)
                    x+="s";
                break;
            case 8:
                if(w==1)
                    x+="t";
                else if(w==2)
                    x+="u";
                else if(w==3)
                    x+="v";
                break;
            case 9:
                if(w==1)
                    x+="w";
                else if(w==2)
                    x+="x";
                else if(w==3)
                    x+="y";
                else if(w==4)
                    x+="z";
                break;
            case 0:
                if(w==1)
                    x+=" ";
                break;
            }
        }
        cout<<x<<endl;

    }
}

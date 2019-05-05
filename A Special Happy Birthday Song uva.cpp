#include <iostream>
using namespace std;
int main()
{
    string wish[16]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};

    int n;
    cin>>n;

    cin.ignore();

    string name[n];

    for(int i=0;i<n;i++)
    {
        cin>>name[i];
    }
    if(n<=16)
    {
        int counter=0;
        for(int i=0;i<16;i++)
        {
            if(counter==n-1)
            {
                cout<<name[counter]<<": "<<wish[i]<<endl;

                counter=0;
            }
            else
            {
                cout<<name[counter]<<": "<<wish[i]<<endl;
                counter++;
            }
        }
    }
    else
    {
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(counter==(16-1))
            {
                cout<<name[i]<<": "<<wish[counter]<<endl;

                counter=0;
            }
            else
            {
                cout<<name[i]<<": "<<wish[counter]<<endl;
                counter++;
            }
        }

        if(counter<(16-1))
        {
            int i=0;
            while(counter!=16)
            {
                cout<<name[i]<<": "<<wish[counter]<<endl;
                counter++;
                i++;
            }
        }
    }
}

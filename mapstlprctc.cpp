#include <bits/stdc++.h>
#include <map>
using namespace std;


int main ()
{
  std::map<int,char> mymap;

  mymap.insert ( std::pair<int,char>(300,'a') );
  mymap.insert ( std::pair<int,char>(200,'b') );

  // show content:

    std::map<int,char>::iterator it=mymap.end();
    --it;
    cout<< it->second <<endl;

  return 0;
}

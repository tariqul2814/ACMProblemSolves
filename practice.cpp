#include <iostream>       // std::cout
#include <stack>          // std::stack
using namespace std;
int main ()
{
  stack<int> mystack;

  mystack.push(10);
  //mystack.push(20);

  cout << "mystack.top() is now " << mystack.top() << '\n';

  return 0;
}

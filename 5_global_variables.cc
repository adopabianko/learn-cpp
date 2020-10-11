#include <iostream>
using namespace std;

// global variable declaration
int g;

int main()
{
  // local variable declaration
  int a, b;

  // actual initialization
  a = 10;
  b = 20;
  g = a + b;

  cout << g;

  return 0
}

#include <iostream>
using namespace std;

int main() {
  int a = 100;
  int b = 200;

  // check the boolean condition
  if (a == 100) {
    // if condition is true then check the following
    if (b == 200) {
      cout << "Value of a is 100 and 200" << endl;
    }
  }
  cout << "Exact value of a is : " << a << endl;
  cout << "Exact value of b is : " << b << endl;

  return 0;
}

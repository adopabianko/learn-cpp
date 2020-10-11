#include <iostream>
using namespace std;

int main() {
  int a = 100;

  if(a == 10) {
    cout << "Value of a is 10" << endl;
  } else if(a == 20) {
    cout << "Value of a is 20" << endl;
  } else if(a == 30) {
    cout << "Value of a is 30" << endl;
  } else {
    cout << "Value of a is not matching" << endl;
  }
  cout << "Exact value of a is : " << a << endl;
}

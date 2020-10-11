#include <iostream>
using namespace std;

int main() {
  int a = 10;

LOOP:do {
       if (a == 15) {
         // skip the iteration
         a = a + 1;
         goto LOOP;
       }
       cout << "value of a: " << a << endl;
       a = a + 1;
     }
     while(a < 20);

     return 0;
}

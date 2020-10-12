#include <iostream>
#include <ctime>
using namespace std;

void getSeconds(unsigned long *par);

int main() {
  unsigned long sec;
  getSeconds(&sec);

  // print the actual value
  cout << "Number of seconds : " << sec << endl;

  return 0;
}

void getSeconds(unsigned long *par) {
  
  *par = time(NULL);

  return;
}

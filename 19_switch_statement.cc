#include <iostream>
using namespace std;

int main() {
  char grade = 'D';

  switch(grade) {
    case 'A':
      cout << "Excellent!" << endl;
      break;
    case 'B':
      cout << "Well done" << endl;
      break;
    case 'C':
      cout << "You passed" << endl;
      break;
    case 'D':
      cout << "Better try again" << endl;
      break;
    default:
      cout << "Invalid grade" << endl;
  }
  cout << "Your grade is " << grade << endl;

  return 0;
}

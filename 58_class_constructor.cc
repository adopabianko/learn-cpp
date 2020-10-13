#include <iostream>

using namespace std;

class Line {
  public:
    void setLength(double len);
    double getLength(void);
    Line(); // This is constructor
  private:
    double length;
};

// Member function definitions including contructor
Line::Line(void) {
  cout << "Object is being create" << endl;
}

void Line::setLength(double len) {
  length = len;
}

double Line::getLength(void) {
  return length;
}

// Main function for the program
int main() {
  Line line;

  // set line length
  line.setLength(6.0);
  cout<<"Length of line : " << line.getLength() << endl;

  return 0;
}

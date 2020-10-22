#include <iostream>

using namespace std;

class Box {
    protected:
        double width;
};

class SmallBox:Box { // SmallBox is the derived class
    public:
        void setSmallWitdh(double wid);
        double getSmallWidth(void);
};

// Member functions of child class
double SmallBox::getSmallWidth(void) {
    return width;
}

void SmallBox::setSmallWitdh(double wid) {
    width = wid;
}

// Main function  for the program
int main() {
    SmallBox box;

    // set box width using member function
    box.setSmallWitdh(5.0);
    cout << "Width of box : " << box.getSmallWidth() << endl;

    return 0;
}
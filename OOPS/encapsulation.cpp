//Here, the variables and functions can be accessed from other classes as well. 
//Hence, this is not data hiding, it is only encapsulation , if we use access modifiers to restrict the access it is abstraction
//This is only encapsulation. We are just keeping similar codes together.
#include <iostream>
using namespace std;

class Rectangle {
  public:
    // Variables required for area calculation
    int length;
    int breadth;

    // Constructor to initialize variables
    Rectangle(int len, int brth) {
        length=len;
        breadth=brth;
    }
    int getArea() {
      return length * breadth;
    }
};

int main() {
  Rectangle rect(8, 6);
  cout << "Area = " << rect.getArea();
  return 0;
}
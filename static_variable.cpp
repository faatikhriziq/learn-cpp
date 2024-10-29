#include <iostream>
#include <ostream>
using namespace std;
void static_counter() {
  static int number = 0;
  number++;
  cout << "Number : " << number << endl;
}
// C++ program to demonstrate static
// variables inside a class

class Gfg {
public:
  int i;

  Gfg() {
    // do nothing
  };
};

int main() {

  // for (int i = 0; i < 100; i++) {
  //   static_counter();
  // }
  Gfg obj;
  obj.i = 10;

  cout << obj.i << endl;
  return 0;
}

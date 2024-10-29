#include <iostream>

using namespace std;
// scope resolution operator (::)

int x = 10;

class A {

public:
  static int name;
  // only declaration
  void func();
};
// definition outside class
void A::func() { cout << "Hello Function" << endl; }

int A::name = 10;
int main() {
  int x = 10;
  //  1) To access a global variable when there is a local variable with same
  //  name:
  cout << "variable global x : " << ::x << endl;
  cout << "variable local x : " << x << endl;
  // 2) To define a function outside a class.
  A a;
  a.func();
  // 3) To access a class’s static variables.
  cout << A::name << endl;
  return 0;
}

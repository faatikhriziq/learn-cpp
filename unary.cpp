#include <iostream>
using namespace std;
int main() {
  // bitwise operator
  /*
  The bitwise NOT operator ~ in C++ performs a bitwise negation operation on
  integral data types, such as integers. It inverts each bit of the operand,
  changing every 0 bit to 1 and every 1 bit to 0′.
  */

  int x = 100;
  int bitwise = ~x;
  cout << bitwise << endl;
  return 0;
}

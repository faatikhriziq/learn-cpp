#include <iostream>

using namespace std;
// bitwise operator merupakan operasi dalam level bit atau binary
// Bitwise AND (&)
// Bitwise OR (|)
// Bitwise XOR (^)
// Bitwise NOT (~)
// Left Shift (<<)
// Right Shift (>>)
int main() {
  int a = 5; //  101
  int b = 3; //  011

  // Bitwise AND
  int bitwise_and = a & b;

  // Bitwise OR
  int bitwise_or = a | b;

  // Bitwise XOR
  int bitwise_xor = a ^ b;

  // Bitwise NOT
  int bitwise_not = ~a;

  // Bitwise Left Shift
  int left_shift = a << 2;

  // Bitwise Right Shift
  int right_shift = a >> 1;

  // Printing the Results of
  // Bitwise Operators
  cout << "AND: " << bitwise_and << endl;
  cout << "OR: " << bitwise_or << endl;
  cout << "XOR: " << bitwise_xor << endl;
  cout << "NOT a: " << bitwise_not << endl;
  cout << "Left Shift: " << left_shift << endl;
  cout << "Right Shift: " << right_shift << endl;
  return 0;
}

#include <iostream>
#include <ostream>

using namespace std;

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}
void swap_reference(int &a, int &b) {
  int temp = a;

  a = b;
  b = temp;
}

void swap_pointer(int *a, int *b) {
  int temp = *a;

  *a = *b;
  *b = temp;
}

int main() {
  int a = 10;
  int b = 20;
  cout << "Before swapping : \n";
  cout << "a = " << a << " b = " << b << endl;
  cout << "&a = " << &a << " &b " << &b << endl;

  swap_pointer(&a, &b);
  cout << "After swapping : \n";
  cout << "a = " << a << " b = " << b << endl;
  cout << "&a = " << &a << " &b " << &b << endl;
  return 0;
}

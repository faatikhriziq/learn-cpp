#include <iostream>
using namespace std;
//
int fibonacci(int n) {
  cout << "Fungsi Fibonacci = " << n << endl;
  if (n == 0 || n == 1) {

    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main() {
  cout << fibonacci(10);
  cout << "Kenapa Saya Terus Belajar";
  return 0;
}

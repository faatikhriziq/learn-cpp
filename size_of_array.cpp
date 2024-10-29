#include <iostream>

using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  // array pada c++ tidak terdapat length, maka dari itu kita bisa menghitung
  // length secara manual dengan menggunakan sizeof(arr[]) / sizeof(arr[0])
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "length of arr : " << n;
  return 0;
}

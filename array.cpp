#include <iostream>

using namespace std;

// int main() {
//   int number[10];
//   int arr[] = {
//       3, 45, 6, 7, 3,
//   };
//   int *ptr = arr;
//   cout << ptr << endl;
//   cout << &arr << endl;
//   int value = 10;
//   for (int i = 0; i < 10; i++) {
//     number[i] = ++value;
//     cout << number[i] << endl;
//   }
//   cout << number[3] << endl;
//   ;
//   cout << sizeof(number);
//   return 0;
// }

// int main() {
//   int arr[] = {23, 34, 12, 56, 57};
//   cout << &arr << endl;
//   cout << &arr + 1 << endl;
//   cout << *arr << endl;
//   cout << *(arr + 1) << endl;
//   return 0;
// }

void printArraySized(int arr[5], int n) {
  cout << "Array as Sized Argument: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void printArrayPointer(int *ptr, int n){
  cout << "Array as Pointer Argument";
  for (int i = 0; i < n; i++) {
    cout << ptr[i] << " ";
  }
  cout << endl;
}
// passing array as an unsized array argument
void printArrayUnsized(int arr[], int n)
{
    cout << "Array as Unsized Array Argument: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
  int arr[] = {4, 5, 6, 7, 3, 10, 13};
  printArraySized(arr, 10);
  printArrayPointer(arr, 10);
  printArrayUnsized(arr, 10);
}

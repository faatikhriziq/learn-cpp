#include <iostream>

using namespace std;

int main() {
  int arr[4][4];
  int arr3[4][4][4];
  int arr2[2][3] = {{2, 3, 4}, {3, 4, 5}};
  cout << "2D Array" << endl;
  // declaring 2d array
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      arr[i][j] = i + j;
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << "3D Array" << endl;
  // declaring 3d array
  for (int i = 0; i < 4; i++) {
    cout << i << "Layer : ";
    for (int j = 0; j < 4; j++) {
      for (int k = 0; k < 4; k++) {
        arr3[i][j][k] = i + j + k;
        cout << arr3[i][j][k];
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}

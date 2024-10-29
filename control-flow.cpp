#include <iostream>
using namespace std;
int main() {
  /*
  Membuat aplikasi check kelulusan nilai
  - kkm
  - nilai
  - hasil : lulus / tidak
  */
  int kkm = 75;
  int nilai;
  string hasil;
  if (nilai >= kkm) {
    hasil = "Lulus";
  } else {
    hasil = "Tidak Lulus";
  }

  cout << "Masukan nilai anda : " << endl;
  cin >> nilai;
  cout << "Hasil : " << hasil;
}

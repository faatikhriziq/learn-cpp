#include <iostream>
using namespace std;

// Storage Class

// auto storage class
/*
    variable yang di deklarasikan di dalam blok kode, seperti fungsi, value
    dari variabel tersebut akan terhapus dari memeori jika
    blok kode tersebut keluar atau selesai
*/

void auto_storage_class() {
  int x = 10; // auto storage class
  // ketika function selesai maka akan terhapus dari memory
  cout << "Auto Storage Variable x : " << x << endl;
}

// extern storage class
/*
    variable yang di deklarasikan dengan extern , digunakan untuk merujuk
   variable yang sudah di deklarasikan di file lain, atau di luar blok kode
    Lifetime : sepanjang program berjalan.
    Memory : Heap atau di segmen data.
*/
int x = 10;
void extern_storage_class() {
  extern int x; // mendeklarasikan variable a yang di definisikan di file atau
                // di luar blok kode
  cout << "Extern Storage Variable x : " << x << endl;
}

// Statis Storage Class
/*
    scope : local atau ke fungsi,
    lifetime : bertahan sepanjang runtime program;
    memory : segmen data,

    Penjelasan:
    Kata kunci static memiliki dua fungsi utama:
    Untuk variabel dalam fungsi: Menyimpan nilai variabel bahkan setelah fungsi
   selesai dieksekusi. Untuk variabel global: Membatasi cakupan variabel hanya
   di file yang sama di mana variabel tersebut dideklarasikan.
*/
static int y = 10; // contoh static dalam konteks global
void static_storage_class() {
  static int x = 10;
  x++;
  cout << "Static Storage dalam fungsi Variable  x : " << x << endl;
}
// Register Storage Class
/*
 * Scope : Lokal ke fungsi atau blok dimana variable di dideklarasikan
 * lifetime : berakhir ketika fungsi atau blok keluar
 * memory location : di register ke CPU (jika memungkinkan)
 *
 * Penjelasan:
 * Variabel register disarankan untuk disimpan di
 * register CPU (bukan di memori) agar lebih cepat diakses.
 * Namun, keputusan akhir diserahkan pada compiler.
 * Penggunaannya telah menjadi kurang umum karena compiler
 * modern sudah cukup cerdas untuk mengoptimalkan penggunaan register.
 */

void register_storage_class() {
  // register int x = 10; // pada g++ 17, penggunaan register bahkan sudah
  // deprecated;
  cout << "Register Storage dalam scope global Variable  x : " << x << endl;
}
int main() {
  auto_storage_class();
  extern_storage_class();
  static_storage_class();
  static_storage_class();
  cout << "Static Storage dalam scope global Variable  x : " << y << endl;
  register_storage_class();
  return 0;
}

#include <iostream>
using namespace std;
int main()
{
    /*
    operator aritmatika adalah operator untuk melakukan perhitungan matematika.
    contohnya seperti :
    1. + :  penjumlahan
    2. - :  pengurangan
    3. * :  perkalian
    4. / : pembagian
    5. % : modulus (untuk menghasilkan sisa bagi)
    */
    int a = 10;
    int b = 11;
    // penjumlahan
    int hasil_penjumlahan = a + b;
    cout << "Hasil Penjumlahan : ";
    cout << hasil_penjumlahan << endl;

    // pengurangan
    int hasil_pengurangan = a - b;
    cout << "Hasil Pengurangan : ";
    cout << hasil_pengurangan << endl;

    // pembagian
    /*
    pada pembagian terkadang hasilnya adalah bukan bilangan bulat, melainkan pecahan, maka dari itu kita menggunakan 
    tipe data float / double untuk menampung hasil pecahan
    */
    int hasil_pembagian = a / b;
    cout << "Hasil Pembagian : ";
    cout << hasil_pembagian << endl;

    // perkalian
    int hasil_perkalian = a * b;
    cout << "Hasil Perkalian : ";
    cout << hasil_perkalian << endl;

    // modulus(sisa hasil bagi)
    /*
    untuk modulus tidak bisa menggunakan tipe data float/double
    */
    int hasil_modulus = a % b;
    cout << "Hasil Modulus(Sisa Hasil Bagi)  : ";
    cout << hasil_modulus << endl;
}
#include <iostream>
using namespace std;

// overloading = menimpa

int luas_kotak(int panjang, int lebar)
{
    return panjang * lebar;
}

int luas_kotak(int sisi)
{
    return sisi * sisi;
}
int main()
{
    cout << "Persegi 5 x 5 : " << luas_kotak(5) << endl;
    cout << "Persegi Panjang 10 * 29 : " << luas_kotak(10, 29) << endl;
}
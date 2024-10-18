#include <iostream>
using namespace std;

int main()
{
    // increment dan decrement
    // preincrement dan postincrement
    int a = 5;
    int b = 5;

    // postincrement
    /*
    post increment ketika dilakukan printing akan menghasilkan nilai yang belum ter increment
    */
    cout << a << endl;
    cout << a++ << endl;
    a++;
    cout << a << endl;

    // preincrement
    cout << b << endl;
    cout << b++ << endl;
    ++b;
    cout << b << endl;

    return 0;
}

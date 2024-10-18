#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;
    /*
    operator logika
    and,or,not(!)
    &&,||,!
    */
    bool hasil = !(a != b && a == b);
    cout << hasil << endl;
}
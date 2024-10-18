#include <iostream>
using namespace std;
int main()
{
    // int a = 0;
    // int b = 0;

    // cout << "While \n";
    // while (a < 100)
    // {
    //     cout << "Looping ke : " << a++ << endl;
    // }
    // cout << endl;
    // cout << "Do While\n";

    // do
    // {
    //     cout << "Looping ke : " << b << endl;
    //     b++;
    // } while (b < 100);

    // cout << "Contoh Looping 1" << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "Looping ke - " << i << endl;
    // }
    // cout << "\nContoh Looping 2 \n";
    // for (int i = 0; i < 10; i += 2)
    // {
    //     cout << i << endl;
    // }

    // cout << "\nContoh Looping 3 \n";
    // for (int i = 0; i > -10; i--)
    // {
    //     cout << i << endl;
    // }

    // cout << "\nContoh Looping 4\n";
    // int total1 = 0;
    // for (int i = 0; i < 10; total1 += i, i++)
    // {
    //     cout << "total = " << total1 << endl;
    // }

    // cout << "\nContoh Looping 5\n";
    // int total2 = 0;
    // for (int i = 0; i < 10; i++, total2 += i)
    // {
    //     cout << "total = " << total2 << endl;
    // }

    // menemukan angka genap dengan for menggunakan control flow continue
    for (int i = 0; i <= 10; i++)
    {
        if (i == 0 || i == 1)
        {
            continue;
        }
        else if (i % 2 == 1)
        {
            continue;
        }
        cout << "Angka Genap " << i << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    /*
    Latihan Membuat Segitiga Menggunakan  Perulangan

    */
    int n;
    cout << "Masukan Jumlah N : ";
    cin >> n;

    cout << "Pola 1 : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i == n - 1)
        {
            cout << endl;
        }
    }

    cout << "Pola 2 : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
        if (i == n - 1)
        {
            cout << endl;
        }
    }

    cout << "Pola 3 : \n";
    for (int i = 0; i < 1; i++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j > i; j--)
            {
                cout << "*";
            }
            cout << endl;
            if (i == n - 1)
            {
                cout << endl;
            }
        }
    }
    cout << "Pola 4 : \n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n; j >= 2 * i - n; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola  5 : \n";
    for (int i = 1; i <= n; i++)
    {
        for (int x = n; x > i; x--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "Pola 6 : \n";

    for (int i = 1; i <= n; i++)
    {
        for (int x = n; x > i; x--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n; j >= 2 * i - n; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

#include <iostream>

using namespace std;

int main()
{
    double a, b;
    char opr;
    double result;
    cout << "KALKULATOR SEDERHANA \n \n";
    cout << "a : ";
    cin >> a;
    cout << "Pilih Operator (+,-,/,*) : ";
    cin >> opr;
    cout << "b : ";
    cin >> b;

    switch (opr)
    {
    case '+':
        result = a + b;
        cout << a << opr << b << "= " << result;
        break;
    case '-':
        result = a - b;
        cout << a << opr << b << " = " << result;
        break;
    case '/':
        result = a / b;
        cout << a << opr << b << "= " << result;
        break;
    case '*':
        result = a * b;
        cout << a << opr << b << "= " << result;
        break;

    default:
        cout << "Operator yang anda masukan salah";
        break;
    }
}
#include <iostream>
using namespace std;

void kuadrat(int *ptr)
{
    *ptr = *ptr * *ptr;
}

int main()
{
    // int a = 10;
    // cout << a << endl;
    // kuadrat(&a);
    // cout << a << endl;

    int a = 10;
    int *ptr = &a;
    cout << &a << endl;
    int b = *ptr;
    *ptr = 20;
    b = 30;

    int &c = a;
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    // fibonacci
    // f(n) = fn1 + fn2

    int n = 10;
    int fn;
    int fn1 = 1;
    int fn2 = 0;

    for (int i = 1; i < n; i++)
    {
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;

        cout << fn << " ";
    }
}
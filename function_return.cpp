#include <iostream>

using namespace std;

int square(int x)
{
    return x * x;
}

double keliling_persegi(double s)
{
    return 4 + s;
}

int main(int argc, char const *argv[])
{
    int y;
    cout << "Number : ";
    cin >> y;
    cout << square(y);
    return 0;
}

#include <iostream>
using namespace std;

int pangkat(int a, int b)
{
    return a = pangkat(a, b - 1);
}
int main()
{
    cout << pangkat(3, 2);
    return 0;
}
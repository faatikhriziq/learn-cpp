#include <iostream>

using namespace std;

int factorial(int number)
{
    if (number == 1)
    {
        return number;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

int main()
{
    cout << factorial(5) << endl;
    return 0;
}
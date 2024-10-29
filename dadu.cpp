#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char yn;
    while (true)
    {
        cout << "Lempar Dadu? (y / n) : ";
        cin >> yn;
        if (yn == 'y')
        {
                   


          cout << "Dadu : " << 1 + (rand() % 6) << endl;
        }
        else if (yn == 'n')
        {
            break;
        }
        else
        {
            cout << "Masukan y atau n! \n";
        }
    }

    return 0;
}

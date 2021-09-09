#include <iostream>
using namespace std;
int main()
{
    // Muhammad Rizal Pahlevi
    // A11.2020.12692

    int maxValue;

    cout << "Program menentukan bilangan itu ganjil atau genap" << endl;
    cout << "Masukkan Batas Angka : ";
    cin >> maxValue;

    for (int a = 1; a < maxValue; a = a + 1)
    {
        if (a % 2 == 0)
        {
            cout << a << " Adalah bilangan genap" << endl;
        }
        else
        {
            cout << a << " Adalah bilangan ganjil" << endl;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    // Muhammad Rizal Pahlevi
    // A11.2020.12692
    int nilai;
    cout << "Pilih Nilai 1 - 5 : ";
    cin >> nilai;
    switch (nilai)
    {
    case 1:
        cout << "Nilai ini 1 ";
        break;
    case 2:
        cout << "Nilai ini 2 ";
        break;
    case 3:
        cout << "Nilai ini 3 ";
        break;
    case 4:
        cout << "Nilai ini 4 ";
        break;
    case 5:
        cout << "Nilai ini 5 ";
        break;
    default:
        cout << "Nilai tidak bisa di konfirmasi ";
    }
    return 0;
}

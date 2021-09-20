#include <iostream>
using namespace std;

int main()
{
    int angka[5] = {7, 5, 6, 12, 35};

    cout << "Angka Angkanya adalah : ";

    for (const int &n : angka)
    {
        cout << n << "  ";
    }

    cout << "\nAngka Angkanya adalah : ";

    for (int i = 0; i < 5; ++i)
    {
        cout << angka[i] << "  ";
    }

    return 0;
}
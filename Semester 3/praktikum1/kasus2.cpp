#include <iostream>

using namespace std;

int main()
{
    int angka;
    string opr;
    cout << "Masukkan angka : ";
    cin >> angka;
    if (angka > 0)
    {
        opr = "Positif";
    }
    else if (angka < 0)
    {
        opr = "Negatif";
    }
    else
    {
        opr = "0";
    }

    if (angka != 0)
    {
        if (angka % 2 == 0)
        {
            cout << " Genap " << opr;
        }
        else
        {
            cout << " Ganjil " << opr;
        }
    }
    else
    {
        cout << "Nol";
    }

    return 0;
}

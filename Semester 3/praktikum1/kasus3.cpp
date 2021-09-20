#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << " Input Angka Pertama : ";
    cin >> num1;
    cout << " Input Angka Kedua : ";
    cin >> num2;
    cout << " Input Angka Ketiga : ";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << " Angka Ke 1 Adalah Yang Terbesar:" << endl
             << " Yaitu= " << num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << " SAngka Ke 2 Adalah Yang Terbesar" << endl
             << " Yaitu= " << num2;
    }
    else
    {
        cout << " Angka Ke 3 Adalah Yang Terbesar" << endl
             << " Yaitu= " << num3;
    }
    return 0;
}

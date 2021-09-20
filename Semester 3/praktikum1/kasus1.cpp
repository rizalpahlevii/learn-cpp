#include <iostream>

using namespace std;

int main()
{
    double ipk;
    cout << "Masukkan IPK : ";
    cin >> ipk;

    if (ipk >= 3.50)
    {
        cout << "CUMLAUDE";
    }
    else if (ipk >= 3.01 && ipk <= 3.49)
    {
        cout << "SANGAT MEMUASKAN";
    }
    else if (ipk >= 2.50 && ipk <= 3.00)
    {
        cout << " MEMUASKAN";
    }
    else if (ipk >= 2.00 && ipk <= 2.49)
    {
        cout << " CUKUP";
    }
    else
    {
        cout << "Invalid";
    }
    return 0;
}

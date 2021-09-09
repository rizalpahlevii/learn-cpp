#include <iostream>

using namespace std;

int main()
{
    // source code
    // int x;
    // cout << "Masukkan sebuah angka : ";
    // cin >> x;
    // cout << "Angka yang dimasukkan adalah " << x << endl;

    // Modif
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName << endl;

    return 0;
}

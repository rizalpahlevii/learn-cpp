#include <iostream>
using namespace std;
int main()
{
    // Muhammad Rizal Pahlevi
    // A11.2020.12692

    string username = "admin";
    string password = "admin";
    string usernameInput;
    string passwordInput;

    cout << "Username : ";
    getline(cin, usernameInput);
    cout << "Password : ";
    getline(cin, passwordInput);

    if (usernameInput == username && passwordInput == password)
    {
        cout << "Login Berhasil";
    }
    else
    {
        cout << "Login Gagal. Username / Password Salah";
    }
    return 0;
}

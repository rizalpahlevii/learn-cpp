#include <iostream>
using namespace std;
struct Mahasiswa
{
    string nama;
    string nim;
    string programStudi;
    string fakultas;
};
int main()
{
    struct Mahasiswa mahasiswa;
    cout << "==++ Pendaftaran Mahasiswa Baru ++==" << endl;
    cout << "Nama : ";
    getline(cin, mahasiswa.nama);
    cout << "NIM : ";
    getline(cin, mahasiswa.nim);
    cout << "Program Studi : ";
    getline(cin, mahasiswa.programStudi);
    cout << "Fakultas : ";
    getline(cin, mahasiswa.fakultas);
    cout << "-----------" << endl;

    cout << "Hasil Pendafataran : " << endl;
    cout << "Nama : " << mahasiswa.nama << endl;
    cout << "NIM : " << mahasiswa.nim << endl;
    cout << "Program Studi : " << mahasiswa.programStudi << endl;
    cout << "Fakultas : " << mahasiswa.fakultas << endl;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int luasTanah;
    int lebarTanah;
    int panjangTanah;

    int lebarKandang;
    int panjangKandang;
    int luasKandang;

    double jumlahKandang;

    cout << " == Tanah ==" << endl;
    cout << "Masukkan Panjang Tanah = ";
    cin >> panjangTanah;
    cout << "Masukkan Lebar Tanah = ";
    cin >> lebarTanah;
    luasTanah = panjangTanah * lebarTanah;
    cout << "Luas Tanah = " << luasTanah << endl;

    cout << " == Kandang ==" << endl;
    cout << "Masukkan Panjang Kandang = ";
    cin >> panjangKandang;
    cout << "Masukkan Lebar Kandang = ";
    cin >> lebarKandang;
    luasKandang = panjangKandang * lebarKandang;
    cout << "Luas Kandang = " << luasKandang << endl;

    jumlahKandang = luasTanah / luasKandang;

    cout << "Jumlah kandang sapi yang dibuat = " << floor(jumlahKandang) << " Buah";

    return 0;
}
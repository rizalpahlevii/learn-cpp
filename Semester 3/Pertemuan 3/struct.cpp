#include <iostream>
using namespace std;
struct MHS
{
    string name;
    string nim;
    string faculty;
    string programStudy;
};
int main()
{
    MHS student[2], univ[2];
    student[0].name = "Muhammad Rizal Pahlevi";
    student[0].nim = "A11.2020.12692";
    student[0].faculty = "FIK";
    student[0].programStudy = "Teknik Informatika";

    student[1].name = "Pahlevi";
    student[1].nim = "A11.2020.99999";
    student[1].faculty = "FIK";
    student[1].programStudy = "Teknik Informatika";

    cout << "Data Mahasiswa Universitas Dian Nuswantoro " << endl;
    cout << "Nama : " << student[0].name << endl;
    cout << "NIM : " << student[0].nim << endl;
    cout << "Progam studi : " << student[0].programStudy << endl;
    cout << "Fakultas : " << student[0].faculty << endl;

    cout << "Data Mahasiswa Universitas Dian Nuswantoro " << endl;
    cout << "Nama : " << student[1].name << endl;
    cout << "NIM : " << student[1].nim << endl;
    cout << "Progam studi : " << student[1].programStudy << endl;
    cout << "Fakultas : " << student[1].faculty << endl;
}
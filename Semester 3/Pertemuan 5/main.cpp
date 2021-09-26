
// Muhammad Rizal Pahlevi
// A11.2020.12692

#include <iostream>
using namespace std;
#define MAX 10
struct Stack
{
    string mahasiswa[MAX];
    int top, data[MAX];
} stack;

void init()
{
    stack.top = -1;
}
bool isFull()
{
    return stack.top == MAX - 1;
}
bool isEmpty()
{
    return stack.top == -1;
}

void push()
{
    if (isFull())
    {
        cout << "Daftar Mahasiswa Penuh" << endl;
    }
    else
    {
        stack.top++;
        cout << "Masukkan Nama Mahasiswa : ";
        cin >> stack.mahasiswa[stack.top];
        cout << "Data " << stack.mahasiswa[stack.top] << " masuk ke daftar." << endl;
    }
}
void pop()
{
    if (isEmpty())
    {
        cout << "Data kosong" << endl;
    }
    else
    {
        cout << "Data " << stack.mahasiswa[stack.top] << " sudah terambil" << endl;
        stack.top--;
    }
}

void printStack()
{
    if (isEmpty())
    {
        cout << "Daftar Mahasiswa Kosong";
    }
    else
    {
        cout << "\n ===== Daftar Mahasiswa ==== : \n"
             << endl;
        int iteration = 1;
        for (int i = stack.top; i >= 0; i--)
        {

            cout << iteration << ". " << stack.mahasiswa[i] << endl;
            iteration++;
        }
    }
}

int main()
{
    int pilihan;
    init();
    do
    {
        printStack();
        cout << "\n=== Menu ===";
        cout << "\n1. Input Mahasiswa\n"
             << "2. Hapus Mahasiswa\n"
             << "3. Keluar\n"
             << "Masukkan Pilihan: ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
            break;
        }
    } while (pilihan != 3);
}
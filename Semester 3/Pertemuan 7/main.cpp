#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define max 3
using namespace std;
int head;
int tail;
int data[max];
void awal()
{
    head = 0;
    tail = 0;
}
int kosong()
{
    if (tail == 0)
        return 1;
    else
        return 0;
}
int penuh()
{
    if (tail == max)
        return 1;
    else
        return 0;
}
void input_enqueue()
{
    if (kosong() == 1)
    {
        head++;
        tail++;
        cout << "Masukkan data = ";
        cin >> data[tail];
        cout << "Data AWAL " << data[tail] << " data ke " << tail << " masuk ke Antrian";
    }
    else if (penuh() == 0)
    {
        tail++;
        cout << "Masukkan data = ";
        cin >> data[tail];
        cout << "Data SELANJUTNYA " << data[tail] << " data ke " << tail << " masuk ke Antrian";
    }
    else
        cout << "Antrian penuh";
}
void hapus_dequeue()
{
    if (kosong() == 0)
    {
        cout << "Data terdepan sudah terambil";
        for (int a = head; a < tail; a++)
        {
            data[a] = data[a + 1];
        }
        tail--;
        if (tail == 0)
        {
            head = 0;
        }
    }
    else
    {
        cout << "Data kosong";
    }
}
void tampil()
{
    if (kosong() == 1)
    {
        cout << "Data kosong";
    }
    else
    {
        cout << "\nAntrian : ";
        for (int i = 1; i <= tail; i++)
            cout << data[i] << " ";
    }
}
void bersih()
{
    head = 0;
    tail = 0;
    cout << "Antrian kosong!";
}
int main()
{
    int pilih;
    awal();
    do
    {
        tampil();
        cout << "\nPergerakan ( TAIL ) : " << tail;
        cout << "\nPergerakan ( HEAD ) : " << head;
        cout << "\n1. Input  " << endl;
        cout << "\n2. Hapus" << endl;
        cout << "\n3. Tampil" << endl;
        cout << "\n4. Bersihkan" << endl;
        cout << "\n5. Keluar" << endl;
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            input_enqueue();
            break;
        case 2:
            hapus_dequeue();
            break;
        case 3:
            tampil();
            break;
        case 4:
            bersih();
            break;
        case 5:
            cout << "Terima kasih";
        }
        getch();
        system("cls");
    } while (pilih != 5);
}
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;
Node *tail;

void awal()
{
    head = NULL;
}

bool isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}

void tambahTabungan(int dataBaru)
{
    Node *nodebaru;
    nodebaru = new Node;
    nodebaru->data = dataBaru;
    nodebaru->next = NULL;

    if (isEmpty())
    {
        head = nodebaru;
        head->next = NULL;
    }
    else
    {
        nodebaru->next = head;
        head = nodebaru;
    }
    cout << "Tabungan ditambahkan : " << endl;
}

void tampil()
{
    if (!isEmpty())
    {
        Node *bantu;
        bantu = head;
        do
        {
            int i = bantu->data;
            cout << "+" << i;
            cout << endl;
            bantu = bantu->next;
        } while (bantu != NULL);
    }
    else
    {
        cout << "Tidak punya tabungan" << endl;
    }
}

void totalTabungan()
{
    if (!isEmpty())
    {
        Node *bantu;
        bantu = head;
        int total = 0;
        int i = 0;
        do
        {
            total = bantu->data;
            bantu = bantu->next;
            i = i + total;
        } while (bantu != NULL);

        cout << "Total tabungan anda : " << i << endl;
    }
}

int main()
{
    tambahTabungan(37000);
    tampil();
    totalTabungan();

    tambahTabungan(7000);
    tampil();
    totalTabungan();

    tambahTabungan(5000);
    tampil();
    totalTabungan();

    cout << "-------------------------" << endl;
    cout << "Terimakasih";
    return 0;
}
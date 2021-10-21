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
void tambahHead(int tambahkanHead)
{
    Node *tambahkan;
    tambahkan = new Node;
    tambahkan->data = tambahkanHead;
    tambahkan->next = NULL;
    if (isEmpty())
    {
        head = tambahkan;
        head->next = NULL;
    }
    else
    {
        tambahkan->next = head;
        head = tambahkan;
    }
    cout << "Nomor Urut Nasabah Telah Ditambahkan" << endl;
}
void tambahBlkg(int dataBaru)
{
    Node *nodeBaru, *bantu;
    nodeBaru = new Node;
    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    if (isEmpty())
    {
        head = nodeBaru;
        head->next = NULL;
    }
    else
    {
        bantu = head;
        while (bantu->next != NULL)
        {
            bantu = bantu->next;
        }
        bantu->next = nodeBaru;
    }
    cout << "Nomor Urut [" << dataBaru << "] Berhasil Ditambahkan Dibelakang" << endl;
}
void hapusBelakang()
{
    Node *hapus, *bantu;
    int tmp;
    if (!isEmpty())
    {
        if (head->next != NULL)
        {
            bantu = head;
            while (bantu->next->next != NULL)
            {
                bantu = bantu->next;
            }
            hapus = bantu->next;
            tmp = hapus->data;
            bantu->next = NULL;
            delete hapus;
        }
        else
        {
            tmp = head->data;
            head = NULL;
        }
        cout << "Nomor Urut [" << tmp << "] Sudah Terhapus" << endl;
    }
    else
    {
        cout << "Kosong, Silahkan menambahkan nasabah terlebih dahulu...!" << endl;
    }
}
void hapusDpn()
{
    Node *hapus;
    int dpn;
    if (!isEmpty())
    {
        if (head->next != NULL)
        {
            hapus = head;
            dpn = hapus->data;
            head = hapus->next;
            delete hapus;
        }
        else
        {
            dpn = head->data;
            head = NULL;
        }
        cout << "Nomor Urut Paling Depan Telah Dihapus" << endl;
    }
    else
    {
        cout << "Kosong, Silahkan menambahkan nasabah terlebih dahulu...!" << endl;
    }
}
void tampil()
{
    if (!isEmpty())
    {
        Node *bantu;
        bantu = head;
        do
        {
            cout << "->[" << bantu->data << "]";
            bantu = bantu->next;
        } while (bantu != NULL);
        cout << endl;
    }
    else
    {
        cout << "Kosong, Silahkan menambahkan nasabah terlebih dahulu...!" << endl;
    }
}
int main()
{
    cout << " NOMOR PANGGILAN NASABAH GANJIL " << endl;
    cout << endl;
    tambahHead(7);
    tampil();
    tambahHead(5);
    tampil();
    tambahHead(3);
    tampil();
    hapusBelakang();
    tampil();
    tambahBlkg(5);
    tampil();
    hapusDpn();
    tampil();
    return 0;
}
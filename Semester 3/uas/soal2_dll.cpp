#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head, *tail;

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
void tambahbelakang(int dataBaru)
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
    cout << dataBaru << " Data tersebut berhasil ditambakan" << endl;
}

void hapusBelakang()
{
    Node *hapus, *bantu;
    int tmp;
    if (isEmpty())
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
        cout << tmp << " dihapus" << endl;
    }
    else
    {
        cout << " Antrian kosong";
    }
}

void tampil()
{
    if (!isEmpty())
    {
        Node *bantu;
        bantu = head;
        int tumpukan[6], x = 0, y;
        do
        {
            tumpukan[x] = bantu->data;
            bantu = bantu->next;
            x++;
        } while (bantu != NULL);
        for (y = x - 1; y >= 0; y--)
            cout << tumpukan[y] << endl;
        cout << endl;
    }
    else
    {
        cout << " kosong";
    }
}

int main()
{
    cout << "~~~~~~~~~~~~~" << endl;
    cout << "          LATIHAN PRAKTIKUM " << endl;
    cout << "~~~~~~~~~~~~~" << endl;

    tambahbelakang(19);
    tampil();

    tambahbelakang(16);
    tampil();

    tambahbelakang(24);
    tampil();

    hapusBelakang();
    tampil();

    tambahbelakang(2);
    tampil();

    return 0;
}
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *head;
Node *tail;

void awal()
{
    head = NULL;
    tail = NULL;
}

bool isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}

void tambahDepan(int dataBaru)
{
    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;

    if (isEmpty())
    {
        head = nodeBaru;
        tail = nodeBaru;
        head->next = NULL;
        tail->prev = NULL;
        head->next = NULL;
        tail->prev = NULL;
    }
    else
    {
        nodeBaru->next = head;
        head->prev = nodeBaru;
        head = nodeBaru;
    }
    cout << dataBaru << "Data Berhasil Ditambahkan Ke Tumpukan" << endl;
}

void tambahBelakang(int dataBaru)
{
    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;

    if (isEmpty())
    {
        head = nodeBaru;
        tail = nodeBaru;
        head->next = NULL;
        tail->prev = NULL;
    }
    else
    {
        tail->next = nodeBaru;
        nodeBaru->prev = tail;
        tail = nodeBaru;
    }
    cout << dataBaru << "Data Berhasil Ditambahkan Di Antrian" << endl;
}

void hapusDepan()
{
    Node *hapus;
    if (isEmpty())
    {
        // Jika data kosong
        cout << "Data DLL Masih Kosong";
    }
    else
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            head->prev = NULL;
        }
        else
        {
            //Data Hanya 1
            hapus = head;
            head = NULL;
            tail = NULL;
        }
        cout << "No. " << hapus->data << "Telah Dihapus Di Antrian" << endl;
    }
}

void tampil()
{
    Node *current;
    current = head;

    if (!isEmpty())
    {
        while (current != NULL)
        {
            cout << "<-" << current->data << "->";
            current = current->next;
        }
        cout << endl;
    }
    else
    {
        cout << "Belum Ada Data Di Dalam DLL";
    }
}

int main()
{
    int choose;
    cout << "PILIH MENU" << endl;
    do
    {
        cout << "\n\n DOUBLE LINKED LIST"
             << "\n _________"
             << "\n1. Tambah Data Depan"
             << "\n2. Tambah Data Belakang"
             << "\n3. Tampil"
             << "\n4. Hapus Data Depan"
             << "\n5. Keluar"
             << "\n _________ "
             << "\nSilahkan Masukkan Pilihan : ";
        cin >> choose;
        switch (choose)
        {
        case 1:
            tambahDepan(10);
            tambahDepan(7);
            tambahDepan(5);
            break;
        case 2:
            tambahBelakang(17);
            tambahBelakang(11);
            break;
        case 3:
            tampil();
            break;
        case 4:
            hapusDepan();
            break;
        case 5:
            break;
        }
    } while (choose != 2);
}
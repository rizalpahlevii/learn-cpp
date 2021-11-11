// Muhammad Rizal Pahlevi
// A11.2020.12692

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    //Tambah Data
    void insert(int newElement)
    {
        Node *newNode = new Node();
        newNode->data = newElement;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    //Tampilkan data
    void show()
    {
        Node *temp = head;
        if (temp != NULL)
        {
            cout << "List Data : ";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        else
        {
            cout << "Data Kosong.\n";
        }
    }
};

// test the code
int main()
{
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.show();

    return 0;
}
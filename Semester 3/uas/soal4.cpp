// Nama : Muhammad Rizal Pahlevi
// NIM : A11.2020.12692

#include <iostream>

using namespace std;

struct node
{
    string data;
    node *next;
    node *prev;
};

node *head;
node *tail;

void start()
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

void push(string param)
{
    node *new_node;
    new_node = new node;

    new_node->data = param;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (isEmpty())
    {
        head = new_node;
        tail = new_node;
        head->next = NULL;
        head->prev = NULL;

        tail->next = NULL;
        tail->prev = NULL;
    }
    else
    {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

void show()
{
    cout << "Nama : Muhammad Rizal Pahlevi";
    cout << endl;
    cout << "NIM : A11.2020.12692";
    cout << endl;

    node *current;
    current = head;
    cout << endl;
    if (!isEmpty())
    {
        while (current != NULL)
        {
            cout << current->data;
            cout << endl;
            current = current->next;
        }
        cout << endl;
    }
    else
    {
        cout << "Tidak ada data";
    }
}
int main()
{
    push("a");
    push("b");
    push("8");
    push("90");
    push("x");
    push("46");
    show();
}
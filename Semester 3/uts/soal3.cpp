#include <iostream>
using namespace std;

#define MAX 1000 //max size for stack

class Stack
{
    int top;

public:
    int myStack[MAX]; //stack array

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
    void display();
};
//pushes element on to the stack
bool Stack::push(int item)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow!!!";
        return false;
    }
    else
    {
        myStack[++top] = item;
        cout << item << endl;
        return true;
    }
}

//check if stack is empty
bool Stack::isEmpty()
{
    return (top < 0);
}

// main program to demonstrate stack functions
int main()
{
    class Stack stack;

    stack.push(2);
    stack.push(4);
    stack.push(6);

    return 0;
}
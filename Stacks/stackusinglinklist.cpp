#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
public:
    Node *head;
    int size;
    int top;
    Stack(int size)
    {
        this->size = size;
        top = -1;
        head = NULL;
    }
    void push(int element)
    {
        top++;
        *head = element;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int peek()
    {
    }
};

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Stack s1(10);
    cout << s1.isEmpty() << endl;
}
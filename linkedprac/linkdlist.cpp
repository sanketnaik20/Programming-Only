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
void insertAtHead(Node *&head, int element)
{
    Node *temp = new Node(element);
    temp->next = head;
    head = temp;
}
void insertAttail(Node *&tail, int element)
{
    Node *temp = new Node(element);
    tail->next = temp;
    temp = tail;
}

void deletion(Node *&head)
{
    if (head == nullptr)
        return;

    Node *temp = head;
    head = head->next;
    delete temp;
}
bool search(Node *head, int target)
{
    Node *current = head;
    while (current->next != NULL)
    {
        if (current->data == target)
            return true;
        current = current->next;
    }
    return false;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int element;
    cout << "enter element" << endl;
    cin >> element;
    Node *node1 = new Node(element);
    Node *head = node1;
    Node *tail = node1;
    int op;
    while (1)
    {
        cout << "Enter 1 For Inserting At Head" << endl
             << "Enter 2 for inserting at tail" << endl;
        cin >> op;
        switch ((op))
        {
        case 1:
            int number;
            cout << "enter number" << endl;
            cin >> number;
            insertAtHead(head, number);
            break;
        case 2:

            cout << "enter number" << endl;
            cin >> number;
            insertAttail(head, number);
            print(head);
        default:
            cout << "errror" << endl;
            break;
        }
    }
}
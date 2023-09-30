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
void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAttail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp = tail;
}

void insertAtPosition(Node *&head, int position, int d)
{

    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    // InsertAtHead(head, 20);
    print(head);
    // insertAttail(tail, 36);
    // print(head);
    // insertAtPosition(head, 2, 99);
    // print(head);
    for (int i = 0; i < 5; i++)
    {

        insertAttail(tail, i);
        cout << endl;
        print(head);
    }
}
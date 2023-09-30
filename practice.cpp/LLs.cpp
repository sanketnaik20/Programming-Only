#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = next;
    }
};
void insertAthead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAttail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << " " << temp->value;
        temp = temp->next;
        cout << "\t";
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAthead(head, 20);
    insertAthead(head, 40);
    insertAthead(head, 90);
    insertAttail(tail, 10);
    insertAthead(head, 9000);
    print(head);
}
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int element)
{
    Node *temp = new Node(element);
    temp->next = head;
    head = temp;
}

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(23);
    Node *head = node1;
    insertAtHead(head, 98);
    insertAtHead(head, 99);
    insertAtHead(head, 101);
    insertAtHead(head, 102);

    display(head);
}
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

void insertAthead(Node *&head, int d)
{
    // new node crerate
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    // new node crerate
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void insertAtPosition(Node *&head, Node *&tail, int Position, int d)
{
    if (Position == 1)
    {
        insertAthead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < Position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void deleteNode(Node *&head, int position)
{
    
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
    // crerated a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    // head pointed to node 1;

    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtPosition(head, tail, 4, 22);
    print(head);
}
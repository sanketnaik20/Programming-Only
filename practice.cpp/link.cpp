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

int insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
int insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp = tail;
}

int insertAtAnyPosition(Node *&head, Node *&tail, int Position, int data)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt < Position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
        cout << "\t" << endl;
    }
}
/// DELETE OPERTAION IS LEFT
///
int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 99);
    insertAtTail(tail, 102);
    insertAtAnyPosition(head, tail, 2, 75);
    int c;
    print(head);
}
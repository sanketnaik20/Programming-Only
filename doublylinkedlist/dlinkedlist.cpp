#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAthead(Node *&head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head->prev = temp;
    temp->prev = NULL;
    head = temp;
}
void insertATtail(Node *&tail, int element)
{
    Node *temp = new Node(element);
    tail->next = temp;
    temp->next = NULL;
    temp->prev = tail;
    tail = temp;
}
void insertAtposition(Node *&head, Node *&tail, int element, int position)
{
    Node *temp = head;
    if (position == 1)
    {
        insertAthead(head, element);
    }

    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertATtail(tail, element);
    }
    Node *nodetoinsert = new Node(element);
    nodetoinsert->next = temp->next->prev;
    temp->next = nodetoinsert->prev;
    temp->next->next = NULL;
}
void print(Node *&head)
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
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAthead(head, 89);
    print(head);
    insertATtail(tail, 67);
    print(head);
    insertAtposition(head, tail, 777, 2);
    print(head);
    return 0;
}
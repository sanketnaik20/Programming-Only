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
void insertionAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertionAttail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void deletionAtHead(Node *&head)
{
Node *temp=head;
if(head->next!=NULL)
{
    head=temp;
}
}
void searchingNode(Node *&head, int target)
{
    Node *temp = head;
    int src = 0;
    while (temp->next != NULL)
    {
        if (temp->data == target)
        {
            src = 1;
        }
        temp = temp->next;
    }
    if (src == 1)
    {
        cout << "element has been found" << endl;
    }
    else
    {
        cout << "element is not found" << endl;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertionAttail(tail, 50);
    insertionAttail(tail, 52);
    insertionAttail(tail, 53);
    insertionAttail(tail, 50);
    print(head);
    searchingNode(head, 51);
}
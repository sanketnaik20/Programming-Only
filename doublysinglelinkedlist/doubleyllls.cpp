#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insertAthead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = NULL;
    if (head != NULL)
    {
        head->prev = temp;
    }
    head = temp;
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
    Node *node1 = new Node(NULL);
    Node *head = node1;
    insertAthead(head, 1010);
    insertAthead(head, 1);
    print(head);
}
#include <iostream>
#include<string>
using namespace std;
class Node
{
public:
    string name;
    int rollno;
    int id;
    Node *next;
    Node(string name, int rollno, int id)
    {
        this->name = name;
        this->rollno = rollno;
        this->id = id;
        this->next = NULL;
    }
};

void printNames(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << endl
             << temp->name << endl
             << temp->id << endl
             << temp->rollno << endl;
        cout << endl;
        temp = temp->next;
    }
    cout << endl;
}
void insertAtHeadNAmes(Node *&head, string name, int rollno, int id)
{
    Node *temp = new Node(name, rollno, id);
    temp->next = head;
    head = temp;
}
// void insertAthead(Node *&head, int element)
// {
//     Node *temp = new Node(element);
//     temp->next = head;
//     head = temp;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
// }

// void Reversing(Node *&head, Node *&tail)
// {
//     Node *temp = head;
//     head->next = tail->next;
//     head = tail;
// }
int main()
{
    Node *node1 = new Node("Sanket", 56, 122344);
    Node *head = node1;
    // Node *tail = node1;
    // printNames(head);
    insertAtHeadNAmes(head, "pratham", 76, 234568);
    // printNames(head);
    insertAtHeadNAmes(head, "akshata", 102, 109997);
    insertAtHeadNAmes(head, "shlok", 999, 123445);
    printNames(head);
    return 0;
}

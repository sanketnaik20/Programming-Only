#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow Element cant be inserted:" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int display()
    {
        if (top >= 0 && top < size)
        {

            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
};

int main()
{
    Stack s1(5);
    s1.push(34);
    cout << s1.display() << " " << endl;
    s1.push(35);
    cout << s1.display() << " " << endl;
    s1.push(36);
    cout << s1.display() << " " << endl;
    s1.push(37);
    cout << s1.display() << " " << endl;
    s1.push(38);
    cout << s1.display() << " " << endl;
}
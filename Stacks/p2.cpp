#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;
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
            cout << "stack is full" << endl;
        }
    }
    void pop()
    {
        if (top != -1)
        {
            top--;
        }
        else
        {
            cout << "stack is empty Underflow" << endl;
        }
    }

    int peek()
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
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(6);
    s.push(23);
    s.push(24);
    s.push(25);
    s.push(26);
    s.push(27);
    s.push(28);
    s.push(28);
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
}
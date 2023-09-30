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
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow:" << endl;
        }
    }

    bool IsEmpty()
    {
        if (top == -1)
        {
            cout << "stack is empty:" << endl;
            return true;
        }
        else
        {
            cout << "stack is not empty:" << endl;
            return false;
        }
    }
    void DisplayStack()
    {
        while (top <= size - 1)
        {
            top = 0;
            cout << " " << arr[top] << endl;
            top++;
        }
    }

    int peek()
    {
        if (top >= 0 && top < size)
        {

            cout << " latest element is :" << arr[top] << endl;
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool Full()
    {
        if (top == size - 1)
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

    Stack s(2);
    s.push(23);
    s.push(26);
    cout << s.peek() << endl;
    cout << s.DisplayStack() << endl;
}

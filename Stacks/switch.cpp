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
        top = -1;
        arr = new int[size];
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
            cout << "Stack Is Full Overflow:" << endl;
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
            cout << "Stack is Empty UnderFlow:" << endl;
        }
    }
    int peek()
    {
        if (top != -1)
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
    bool isFull()
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

    Stack s1(15);
    int returned_value, op, number;
    while (1)
    {
        cout << "Enter 1 for Pushing the element:" << endl
             << "Enter 2 for Poping out the element" << endl
             << "Enter 3for Peek"
             << endl
             << "Enter 4 to Check Is Stack is Empty or Not" << endl
             << "Enter 5 to check if stack is Full or Not" << endl
             << "Enter 6 to Display Stack" << endl
             << "Enter 0 to Exit:" << endl;
        cout << endl;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter Number" << endl;
            cin >> number;
            cout << endl;
        }

        switch (op)
        {
        case 1:
            s1.push(number);
            cout << "element " << number << " has been pushed succesfully" << endl;
            cout << endl;
            break;
        case 2:
            s1.pop();
            cout << "element has been popped succesfully" << endl;
            cout << endl;
            break;
        case 3:

            cout << "Top Element is " << s1.peek() << endl;
            cout << endl;
            break;
        case 4:
            returned_value = s1.isEmpty();
            if (returned_value == 1)
            {
                cout << "Stack is Empty" << endl;
            }
            else
            {
                cout << "stack is not empty" << endl;
            }
            cout << endl;
            break;
        case 5:
            returned_value = s1.isFull();
            if (returned_value == 1)
            {
                cout << "Stack is Full" << endl;
            }
            else
            {
                cout << "stack is not full" << endl;
            }
            cout << endl;
            break;
        case 6:
            int i;
            cout << "Your Stack is:" << endl;
            for (i = 0; i <= s1.top; i++)
            {
                cout << s1.arr[i] << endl;
            }
            cout << endl;
            break;
        case 0:

            exit(0);
        default:
            cout << "invalid choice" << endl;
            cout << endl;
            break;
        }
    }
}
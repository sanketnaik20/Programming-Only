#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    void Enqueue(int element)
    {
        if (front == -1)
        {
            front = 0;
        }
        if (rear < size - 1)
        {
            rear++;
            arr[rear] = element;
        }
        else
        {
            cout << "Queue is Full Overflow Condition" << endl;
        }
    }

    void dequeue()
    {
        if (front <= rear && front != -1)
        {
            front++;
        }
        else
        {
            cout << "Queue is Empty Underflow" << endl;
            rear = front - 1;
        }
    }
    int peek()
    {
        if (rear != -1)
        {
            return arr[front];
        }
        else
        {
            cout << "stack is empty" << endl;
            return 0;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
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
        if (rear >= size - 1)
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
    Queue q(1000);
    int op, number, returned_Value;
    while (1)
    {

        cout << "Enter 1 to Insert An element is the queue (Enqueue)" << endl
             << "Enter 2 to Remove An element from Queue (DeQueue)" << endl
             << "Enter 3 to  Peek The Front element" << endl
             << "Enter 4 to Check if Queue is Empty or Not" << endl
             << "Enter 5 to Check if Queue is Full or Not" << endl
             << "Enter 0 to Exit :" << endl;
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
            q.Enqueue(number);
            cout << "Element " << number << "Succefully Enqueue'ed in the Queue" << endl;
            cout << endl;
            break;
        case 2:
            q.dequeue();
            cout << "Element succfully dequeue'ed from the Queue " << endl;
            cout << endl;
            break;
        case 3:
            cout << " " << q.peek() << endl;
            cout << endl;
            break;
        case 4:
            returned_Value = q.isEmpty();
            if (returned_Value == 1)
            {
                cout << "Queue is Emtpty" << endl;
                cout << endl;
            }
            else
            {
                cout << "Queue is Not Empty" << endl;
                cout << endl;
            }
            break;
        case 5:
            returned_Value = q.isFull();
            if (returned_Value == 1)
            {
                cout << "Queue is full" << endl;
                cout << endl;
            }
            else
            {
                cout << "Queue is Not Full" << endl;
                cout << endl;
            }
            break;
        case 0:
            exit(0);
        default:
            cout << "invalid output" << endl;
            cout << endl;
            break;
        }
    }
}

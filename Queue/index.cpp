#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int size;
    int rear;
    int front;
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        rear = -1;
        front = -1;
    }

    void enque(int element)
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
            cout << "Queue is Full" << endl;
        }
    }

    void deque()
    {
        if (front != -1)
        {
            front++;
        }
        else
        {
            cout << "Queue Is empty" << endl;
        }
    }

    int peek()
    {
        return arr[rear];
    }
};

int main()
{

    Queue q1(5);
    

                                                                       
         << q1.peek() << endl;
}
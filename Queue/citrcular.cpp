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

    void EnQueue(int element)
    {
        if((front==0 && rear=size-1)||)
    }
};
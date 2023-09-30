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
            cout << "Stack OverFlow" << endl;
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
            cout << "Cant Pop the element Stack Underflow" << endl;
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
    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "no element found" << endl;
            return -1;
        }
    }
};

int main()
{
    Stack st(10);
    st.push(23);
    st.push(24);
    st.push(25);
    st.push(26);
    st.push(27);
    st.push(28);
    st.push(29);
    st.push(30);
    st.push(311);
    st.push(312);
    Stack s1(3);
    s1.push(313); // after stack overflow;
    s1.push(314); // after stack overflow;
    s1.push(353); // after stack overflow;

    cout << st.peek() << endl
         << s1.peek() << endl;
    return 0;
}
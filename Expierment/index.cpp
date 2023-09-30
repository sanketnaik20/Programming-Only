#include <iostream>
using namespace std;

void selection_sort(int a[], int size)
{
    int i, j, temp, min;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i; j <= size - 2; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}

void insertion_sort(int a[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j--;
        }
    }
}

void print(int a[], int size)
{
    int i;
    cout << "Now Sorted array Is:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }

    cout << endl;
}
int main()
{
    int a[100], size, i, op;
    cout << "Enter Size of array" << endl;
    cin >> size;
    cout << "Enter elements of the array" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Array before Sorted is: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
    cout << endl
         << "Enter 1 to sort with Selection Sort" << endl
         << "Enter 2 to sort with insertion Sort" << endl
         << "Enter 3 to sort with Exchange Sort" << endl
         << "Enter 4 to sort with Merge Sort" << endl
         << "Enter 5 to Exit" << endl;
    cin >> op;
    cout << endl;
    switch (op)
    {
    case 1:
        cout << endl;
        selection_sort(a, size);
        print(a, size);
        break;
    case 2:
        cout << endl;
        insertion_sort(a, size);
        print(a, size);
        break;

    default:
        cout << "invalid option" << endl;
    }
}2
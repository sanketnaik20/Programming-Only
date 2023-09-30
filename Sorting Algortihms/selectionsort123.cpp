#include <iostream>
using namespace std;
void selection_sort(int a[], int size)
{
    int i, j, min, temp;

    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != j)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    cout << "sorted araay is:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
}
void insertion_sort(int a[], int size)
{
    int i, j, temp;
    for (i = 1; i < size; i++)
    {
        j = i - 1;
        for (; j = 0; j--)
        {
            temp = a[i];
            if (a[j] < a[i])
            {
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
        }
    }
    cout << endl
         << "Sorted Array is:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
}
int main()
{
    int i, j, a[100], size;
    cout << "Enter Size of Array: " << endl;
    cin >> size;
    cout << "Enter Elements:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    selection_sort(a, size);
    insertion_sort(a, size);
}
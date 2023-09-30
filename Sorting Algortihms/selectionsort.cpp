#include <iostream>
using namespace std;

int selection_sort(int a[], int size)
{
    int i, j, min, temp;
    for (i = 0; i <= size - 2; i++)
    {
        min = i;
        for (j = i; j <= size - 1; j++)
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
    cout << "Now Sorted array Is:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }

    cout << endl;

    return 0;
}
int main()
{
    int size, i;
    cout << "enter size of array:" << endl;
    cin >> size;
    int *a = new int[size];
    cout << "enter elements of array:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "array is:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
    selection_sort(a, size);
    return 0;
}
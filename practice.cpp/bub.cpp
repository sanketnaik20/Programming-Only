#include <iostream>
using namespace std;
void bubbleSort(int a[], int size)
{
    int i;
    int j;
    int k;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
    }
    cout << endl
         << "array is:" << endl;

    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
}
int main()
{
    int a[100], size, i;
    cout << "enter size:" << endl;
    cin >> size;
    cout << "enter elements:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "array is:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
    bubbleSort(a, size);
}

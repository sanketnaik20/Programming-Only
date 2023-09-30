#include <iostream>
using namespace std;
void insertionSort(int a[], int size)
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
    cout << "sorted srray is:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
}
int main()
{
    int a[100], size, i;
    cout << "Enter Size of Array:" << endl;
    cin >> size;
    cout << "Enter Elements of array:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    insertionSort(a, size);
    return 0;
}
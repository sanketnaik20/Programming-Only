#include <iostream>
using namespace std;

int binarysearch(int a[], int size, int target);
int binarysearch(int a[], int size, int target)
{
    int l = 0;
    int r = size - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (target == a[mid])
        {
            return mid;
        }
        else if (target < a[mid])
        {
            r = mid - 1;
        }
        else if (target > a[mid])
        {
            l = mid + 1;
        }
        return -1;
    }
}
int main()
{
    int a[100], size, i, target, returned_value;
    cout << "enter size of array:" << endl;
    cin >> size;
    cout << "enter elements:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    cout << "array is:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
    cout << "enter target: " << endl;
    cin >> target;
    returned_value = binarysearch(a, size, target);
    if (returned_value != -1)
    {
        cout << "Element is Present:" << endl;
    }
    else
    {
        cout << "elements not present:" << endl;
    }
}

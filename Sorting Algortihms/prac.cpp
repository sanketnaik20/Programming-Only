#include <iostream>
using namespace std;

int Binary_Search(int a[], int size, int target)
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
    }
    return -1;
}
int main()
{
    int a[100], i, size, returned_value, target;
    cout << "enter size of array:" << endl;
    cin >> size;
    cout << "enter elements of array:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "enter target" << endl;
    cin >> target;
    returned_value = Binary_Search(a, size, target);
    if (returned_value != -1)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
}
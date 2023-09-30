#include <iostream>
using namespace std;
int BinarySearch(int a[], int size, int target)
{
    int l = 0;
    int r = size - 1;
    
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (target == a[mid])
            return mid;
        else if (target < a[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()

{
    int a[100], size, i, target, mid;
    cout << "enter size of array:" << endl;
    cin >> size;
    cout << "Enter elements of array:" << endl;
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
    cout << "enter target" << endl;
    cin >> target;
    int returned_value = BinarySearch(a, size, target);
    if (returned_value != -1)
    {
        cout << "element  present :" << endl;
    }
    else
    {
        cout << "element not present:" << endl;
    }
    return 0;
}
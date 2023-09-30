#include <iostream>
using namespace std;
int Binary_search(int a[], int size, int target)
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
    int size, i, n, returned_value, target;
    cout << "enter length of array:" << endl;
    cin >> size;
    int *a = (int *)malloc(sizeof(int) * size);
    cout << "enter elements of array:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << endl
         << "array is: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
    cout << "enter target:" << endl;
    cin >> target;
    returned_value = Binary_search(a, size, target);
    if(returned_value!=-1)
    {
        cout<<"element is present:"<<endl;
    }
    else
    {
        cout<<"element not present:"<<endl;
    }
}
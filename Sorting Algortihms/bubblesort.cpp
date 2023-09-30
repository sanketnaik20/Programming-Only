#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    int round;
    int i, k;

    
//time complexity = 0(n^2)
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n-i; j++)
        {
            if (a[i] >= a[j])
            {

                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
    cout << "sorted array is :" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "  " << a[i];
    }
    cout << endl;
}
int main()
{
    int a[5] = {55, 33, 26, 76, 8};
    int i;
    cout << "array before sorted is : " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
    bubble_sort(a, 5);
    return 0;
}
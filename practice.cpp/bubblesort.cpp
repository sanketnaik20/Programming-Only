#include <iostream>
using namespace std;
int swap(int *a, int *i, int *j);
void BubbleSort(int *a, int *size);
void display(int *a, int *size);
void display(int *a, int *size)
{
    int i;
    for (i = 0; i < *size; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
}
int swap(int *a, int *i, int *j)
{
    int k;
    k = a[*j];
    a[*j] = a[*j + 1];
    a[*j + 1] = k;
    return k;
}

// }
// void BubbleSort(int *a, int *size)
// {
//     int i,k,j;
//     for (i = 0; i < *size - 1; i++)
//     {
//         for (j = 0; j < *size - i - 1; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                swap(a,&i,&j);
//             }
//         }
//     }

// }
void BubbleSort(int a[], int *size)
{
    int i;
    int j;
    for (i = 0; i < *size - 1; i++)
    {
        for (j = 0; j < *size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a, &i, &j);
            }
        }
    }
}
int main()
{
    int a[100], size, i;
    cout << "enter size of array:" << endl;
    cin >> size;
    cout << "enter elments of array:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "array is :" << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
    BubbleSort(a, &size);
    cout << "sorted array is:" << endl;
    display(a, &size);
}
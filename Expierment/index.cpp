#include <iostream>
using namespace std;

void selection_sort(int a[], int size)
{
    int i, j, temp, min;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i; j <= size - 2; j++)
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
}

void insertion_sort(int a[], int size)
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
}
void merge(int arr[], int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int leftArr[n1];
    int rightArr[n2];

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[middle + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}

int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void countingSort(int arr[], int size, int place)
{
    const int max = 10;
    int output[size];
    int count[max];

    for (int i = 0; i < max; ++i)
        count[i] = 0;

    for (int i = 0; i < size; i++)
        count[(arr[i] / place) % 10]++;

    for (int i = 1; i < max; i++)
        count[i] += count[i - 1];

    for (int i = size - 1; i >= 0; i--)
    {
        output[count[(arr[i] / place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int size)
{

    int max = getMax(arr, size);

    for (int place = 1; max / place > 0; place *= 10)
        countingSort(arr, size, place);
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);

        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

void print(int a[], int size)
{
    int i;
    cout << "Now Sorted array Is:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }

    cout << endl;
}
int main()
{
    int a[100], size, i, op;
    while (1)
    {

        cout << "Enter Size of array" << endl;
        cin >> size;
        cout << "Enter elements of the array" << endl;
        for (i = 0; i < size; i++)
        {
            cin >> a[i];
        }
        cout << "Array before Sorted is: " << endl;
        for (i = 0; i < size; i++)
        {
            cout << " " << a[i];
        }
        cout << endl
             << "Enter 1 to sort with Selection Sort" << endl
             << "Enter 2 to sort with insertion Sort" << endl
             << "Enter 3 to sort with Merge Sort" << endl
             << "Enter 4 to sort with Radix Sort" << endl
             << "Enter 5 to sort with Quick Sort" << endl
             << "Enter 6 to Exit" << endl;
        cin >> op;
        cout << endl;

        switch (op)
        {
        case 1:
            cout << endl;
            selection_sort(a, size);
            print(a, size);
            cout << endl;
            break;
        case 2:
            cout << endl;
            insertion_sort(a, size);
            print(a, size);
            cout << endl;
            break;
        case 3:
            cout << endl;
            mergeSort(a, 0, size - 1);
            print(a, size);
            cout << endl;
            break;
        case 4:
            cout << endl;
            radixsort(a, size);
            print(a, size);
            cout << endl;
            break;

        case 5:
            cout << endl;
            quicksort(a, 0, size - 1);
            print(a, size);
            cout << endl;
            break;
        default:
            cout << "invalid option" << endl;
        }
    }
}
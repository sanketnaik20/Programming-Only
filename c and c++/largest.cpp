#include <iostream>
using namespace std;

int main()
{
    int a[100], max, i, size;
    a[0] = max;
    cout << "Enter size of array:" << endl;
    cin >> size;
    cout << "enter elements of array:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "array is :" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " " << endl;
    }
//finding maximum
for(i=0;i<size;i++)
{
    if(a[i]>max)
    {
        max=a[i];

    }

}
cout<<"maximum element in that array is " ""<< max <<endl;
}
//time complexity of this code is 0(n)
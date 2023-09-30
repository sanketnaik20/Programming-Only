#include <iostream>
using namespace std;
int fact(int );
int fact(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
        return (x * fact(x - 1));
}
int main()
{
    int n, factorial;
    cout << "enter the number:" << endl;
    cin >> n;
    factorial = fact(n);
    cout << "factorial is " << factorial << endl;
    return 0;
}
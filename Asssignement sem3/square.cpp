#include <iostream>
using namespace std;
int power(int x, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return (x * power(x, exponent - 1));
    }
}
int main()
{
    int n, square, exponent;
    cout << "enter number and power" << endl;
    cin >> n;
    cin >> exponent;
    square = power(n, exponent);
    cout << "the power of number " << n << " is : " << square << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int i, power, number, result = 1;
    cout << "enter number" << endl;
    cin >> number;
    cout << "enter power of a number" << endl;
    cin >> power;
    if (power >= 0)
    {
        for (i = 0; i < power; i++)
        {
            result = result * number;
        }
        cout << "The Power of the Number " << number << " is:  " << result << endl;
    }
    else
    {
        cout << "Power of Negtaive number are not supported:" << endl;
    }
    return 0;
}
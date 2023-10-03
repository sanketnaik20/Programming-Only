#include <iostream>
using namespace std;
int main()
{
    int i, j;
    i = 5;
    j = 4;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j <= 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
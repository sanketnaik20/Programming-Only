#include <iostream>
using namespace std;
class Sum
{

public:
    void add(int x, int y)
    {
        int sum = x + y;
        cout << sum << endl;
    }
    void add(int x, int y, int z)
    {
        int sum = x + y + z;
        cout << sum << endl;
    }
    void add(float x, float y)
    {
        float sum = x + y;
        cout << sum << endl;
    }
};
int main()
{
    Sum s;
    s.add(2, 3);
    s.add(3, 4, 5);
    s.add(float(2.8), float(6.0));
}
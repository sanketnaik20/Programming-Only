#include <iostream>
using namespace std;
class ABC
{
    int x;

public:
    void setValue(int n)
    {
        x = n;
    }
    int getValue()
    {
        return x;
    }
};
int main()
{
    ABC obj1;
    obj1.setValue(56);
    cout << " " << obj1.getValue() << endl;
    ;
}
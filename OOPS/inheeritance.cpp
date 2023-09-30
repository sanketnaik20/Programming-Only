#include <iostream>
using namespace std;
class Parent
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

class Child1 : public Parent
{
    // xwill remain public:
    // y will remain protected
    // z will remain private will not be accesible
};
class Child2 : private Parent
{
    // x will be private
    // y will be private
    // z will be private
};
class child3: protected Parent
{
//x will be proteced
//y will be protected
//z will be innacssible
};
int main()
{
    Parent p;
    p.x;
}
#include <iostream>
using namespace std;
class Parent
{
public:
    Parent()
    {
        cout << "parent class" << endl;
    }
};
class Child : public Parent
{
public:
    Child()
    {
        cout << "child ckass" << endl;
    }
};
class Grandchild : public Child
{
public:
    Grandchild()
    {

        cout << "grandchild class" << endl;
    }
};

int main()
{
    Grandchild gc;
    return 0;
}
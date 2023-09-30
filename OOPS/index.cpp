#include <iostream>
#include <string>
using namespace std;
class Hero
{
    // properties
private:
    int health;

public:
    char *name;
    char level;

    Hero()
    {
        cout << " default construtor called:" << endl;
        name = new char[100];
    }

    // paremtereised contstor
    Hero(int health)

    {
        cout << "this-> " << this << endl;
        this->health = health;
    }
    Hero(int health, char level)

    {
        this->level = level;
        this->health = health;
    }
    // copy construtotr
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << endl;
        cout << "name is " << this->name << endl;

        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
        cout << endl;
    }
    // getter-setter
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('d');
    char name[7] = "Sanket";
    hero1.setName(name);
    hero1.print();
    Hero hero2(hero1);
    // or
    // Hero hero2=hero1;

    hero2.print();

    ///
    hero1.name[0] = 'g';
    hero1.print();

    hero2.print();
}

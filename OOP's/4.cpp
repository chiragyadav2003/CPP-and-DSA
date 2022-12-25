#include <bits/stdc++.h>
using namespace std;

class Hero
{

private:
    // properties
    int health;

    char level;

public:
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
};

int main()
{

    // static allocation in memory
    Hero a;
    a.setHealth(30);
    a.setLevel('n');
    cout << "b level = " << a.getLevel() << endl;
    cout << "b health = " << a.getHealth() << endl;

    // dynamic allocation
    Hero *b = new Hero;
    b->setHealth(80);
    b->setLevel('d');
    cout << "b level = " << (*b).getLevel() << endl;
    cout << "b health = " << (*b).getHealth() << endl;
    // here we have used dereference operator as we can not directly use b
    // as b is address se we have to de refer it first as  (*b)

    // if we to directly use b then we have to use this operator i.e,  " -> " we can use arrow
    cout << "b level = " << b->getLevel() << endl;
    cout << "b health = " << b->getHealth() << endl;

    return 0;
}
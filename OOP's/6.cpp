#include <bits/stdc++.h>
using namespace std;

class Hero
{

private:
    // properties
    int health;

    char level;

public:
    // simple constructor
    Hero()
    {
        cout << "simple constructor called" << endl;
        cout << "simple constructor this->" << this << endl;
    }

    // parameterised constructor
    Hero(int health)
    {
        cout << "parametrised constructor for health " << endl;
        cout << "this -> " << this << endl;
        this->health = health;
    }

    // parametrised constructor
    Hero(int health, char level)
    {
        cout << "parametrised constructor for health and level called" << endl;
        cout << " this ->" << this << endl;
        this->health = health;
        this->level = level;
    }

    void print()
    {
        cout << "level = " << level << endl;
    }

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
    // simple constructor is called
    // object is created using simple constructor
    Hero ramesh;
    cout << "ramesh address = " << &ramesh << endl;
    ramesh.print();
    cout << endl
         << endl;

    // first parametrised constructor called
    // object is created using parametrised constructor
    Hero ram(50);
    cout << "ram address = " << &ram << endl;
    ram.print();

    cout << endl
         << endl;

    // second parametrised constructor is called
    // object is created using parametrised constructor
    Hero raj(40, 'f');
    cout << "raj address = " << &raj << endl;
    raj.print();

    cout << endl
         << endl;

    cout << "for dynamic allocation 1 " << endl;
    // dynamically
    // constructor for health is called
    // here also object is created using parametrised constructor
    Hero *rajesh = new Hero(50);
    // here rajesh is pointer so it will be holding address
    cout << "rajesh address = " << rajesh << endl;
    rajesh->print();

    cout << endl
         << endl;

    cout << "for dynamic allocation 2 " << endl;
    // dynamically
    // constructor for health and level is called
    // object is created using parametrised constructor
    Hero *k = new Hero(50, 'g');
    cout << "k address = " << k << endl;
    k->print();

    return 0;
}
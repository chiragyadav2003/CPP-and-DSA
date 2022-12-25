#include <bits/stdc++.h>
using namespace std;

class Hero
{

private:
    // properties
    int health;

public:
    char level;

    // create constructor so that we can access name in object
    // without it we can not access name string
    Hero()
    {
        cout << "simple constructor is called :" << endl;
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

    // destructor
    // here we use negation sign before writing it
    // format is same as constructor
    ~Hero()
    {
        cout << "destructor called" << endl;
    }
};

int main()
{
    // ststic allocation
    //destructor is called automatically
    Hero h1;

    // dynamic allocation
    Hero *h2 = new Hero();
    //destructor is called dynamically
     delete h2;

    return 0;
}
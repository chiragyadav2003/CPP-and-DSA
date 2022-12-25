#include <bits/stdc++.h>
using namespace std;

class Hero
{

private:
    // properties
    int health;

    char level;

public:
//constructor creation
    Hero()
    {
        cout << "constructor called" << endl;
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

    //whwn evev we create an object then very first constructor is called

    // static allocation
    cout << "hi" << endl;
    Hero ramesh;

    cout << "hello" << endl;

    // dynamic allocation
    Hero *h = new Hero;
    cout << "namaste" << endl;

    return 0;
}
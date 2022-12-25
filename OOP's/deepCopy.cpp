#include <bits/stdc++.h>
using namespace std;

class Hero
{

private:
    // properties
    int health;

public:
    char level;

    // dynamically create name array
    char *name;

    void print()
    {
        cout << endl
             << endl;
        cout << "[name :" << this->name << " ,";
        cout << "health = " << this->health << " ,";
        cout << "level = " << this->level << " ]";
        cout << endl
             << endl;
    }

    // create constructor so that we can access name in object
    // without it we can not access name string
    Hero()
    {
        cout << "simple constructor is called :" << endl;
        name = new char[100];
    }

    // create own copy constructor
    Hero(Hero &temp)
    {
        // create new name object string dynamically of size same as name of temp hero
        char *ch = new char[strlen(temp.name) + 1];
        // copying value of name of temp in new created new 'ch' string
        strcpy(ch, temp.name);

        cout << "copy constructor is called :" << endl;

        // update our object name as now it has different string
        // so as change occur in 1 object then it will not reflect in other object
        this->name = ch;
        // copying temp hero propereties i.e, health and level in new object
        this->health = temp.health;
        this->level = temp.level;
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

    // setter to set name for object
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    Hero hero1;
    hero1.setHealth(70);
    hero1.setLevel('c');
    char name[7] = "babbar";
    hero1.setName(name);
    hero1.print();

    // here we use default copy contructor for copying
    Hero hero2(hero1);
    hero2.print();

    // changing the first letter of name 'b' by 'g'
    hero1.name[0] = 'g';
    hero1.print();

    // we also print hero2
    hero2.print();

    // here we can see that as we make change in  name for object 1  i.e, hero1  they do not begin to reflect in hero2
    // this is due to deep copy
    // in deep copy both the object are accessing different memory
    // so if change occur in one memory then it will not reflect in other also
    // as both are storing address in name as name is declared as pointer
    // so both objects name are referring to their respective name string

    return 0;
}
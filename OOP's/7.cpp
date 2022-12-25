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
       // cout << "simple constructor this->" << this << endl;
    }

    // parameterised constructor
    Hero(int health)
    {
       // cout << "parametrised constructor for health " << endl;
       // cout << "this -> " << this << endl;
        this->health = health;
    }

    // parametrised constructor
    Hero(int health, char level)
    {
       // cout << "parametrised constructor for health and level called" << endl;
       // cout << " this ->" << this << endl;
        this->health = health;
        this->level = level;
    }

    //copy constructor
    //here we used de-reference operator to avoid call by value
    //below copy constructor is efault copy constructor 
    //we do not have any specific need to create it
    //but as we ceate our copy constructor then it will be deleted so we have to create it
    Hero(Hero &temp){
        this->health = temp.health;
        this->level = temp.level;
    }

     //copy constructor
    //here we used de-reference operator to avoid call by value
    Hero(Hero &temp, char level){
        this->health = temp.health;
        this->level = level;
    }

    void print()
    {
        cout<<"health = "<< this->health<<endl;
        cout << "level = " << this->level << endl;
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

  //creation of object using parametrised constructor in which health and level is passed
    Hero S(70, 'd');
    S.print();

    cout<<endl<<endl;

//here we copied one object into other using copy constructor
    Hero P(S);
    P.print();
    
   cout<<endl<<endl;

//copy constructor called
   Hero A(S, 'p');
   A.print();


    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Hero
{

private:
    // properties
    int health;

public:
    char level;

    //static keyword used to create static data member
    static int timeToComplete;

  //static function creation
  //we can access only static member in static function
  //if we use any other member or data type in static function then it will throw error
    static int random(){
        return timeToComplete;
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

//initilization of data member created using static keyword
int Hero :: timeToComplete = 10;

int main()
{
    //here we can see that we can access statically keyword created data member 
    //we can access them without creation of object
    cout<<Hero::timeToComplete<<endl;

    //accessing static function
    cout<<Hero::random()<<endl;

    return 0;
}
// using getter and setter
// they are nothing but a method to access the private member outside the class

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

  // static allocation
  Hero ramesh;

  cout << "health h1 = " << ramesh.getHealth() << endl;

  // use setter
  ramesh.setHealth(50);

  cout << "health h2 = " << ramesh.getHealth() << endl;

  cout << "size of ramesh = " << sizeof(ramesh) << endl;
  // here size of ramesh 8 byte instead of 4 byte as it is refering to a pointer

  return 0;
}
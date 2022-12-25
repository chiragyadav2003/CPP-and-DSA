#include <iostream>
using namespace std;

class Hero
{
  //properties
  int health;
};

class Villain{
//create an empty class

};

int main()
{
    
    Hero h1;
  cout<<"size of class hero "<<sizeof(h1);
  cout<<endl;

  Villain v1;
  cout<<"size of empty class : "<<sizeof(v1);
  //size of empty class is 1 byte yet it has no properties or data member
  //it is so to keep the identification and track of class

    return 0;
}
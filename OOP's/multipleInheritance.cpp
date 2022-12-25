#include <bits/stdc++.h>
using namespace std;

//multiple inheritance 
//2 or more than 2 parent class for one child class 

class Human
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};


class Dog {

    public:
    void bark(){
        cout<<"dog is barking"<<endl;
    }


};

//here class Alien is inherited from multiple classes
class Alien : public Dog, public Human{

    public:
    void sound(){
        cout<<"alien is making sound"<<endl;
    }
};

int main()
{

   Human h1;
   h1.speak();



   Dog d1;
   d1.bark();

   Alien a1;
  a1.speak();
  a1.bark();
  a1.sound();



    return 0;
}
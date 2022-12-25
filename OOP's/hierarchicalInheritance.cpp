#include <bits/stdc++.h>
using namespace std;

//hierarchical inheritance 
//2 or more than 2 child class are inherited from one single parent class
class Animal
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

//class dog is inherited from class animal
class Dog : public Animal {

    public:
    void bark(){
        cout<<"dog is barking"<<endl;
    }


};

//class lion is inherited from class animal
class Lion : public Animal{

    public:
    void roar(){
        cout<<"lion is roaring"<<endl;
    }
};

int main()
{

   Animal a1;
   a1.speak();



   Dog d1;
   d1.speak();
   d1.bark();

   Lion l1;
  l1.speak();
  l1.roar();



    return 0;
}
#include <bits/stdc++.h>
using namespace std;

//multi level inheritance 
//chain type of inheritance as a -> b -> c
//b is child class of a
//c is child class of b
//a and c are not directly related

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

//Dog class is inherited from Animal class
class Dog : public Animal{

    public:
    void bark(){
        cout<<"dog is barking"<<endl;
    }


};


//germanSephard class is inherited from Dog class
class germanSephard : public Dog{

    public:
    void sound(){
        cout<<"german sephard is barking"<<endl;
    }
};

int main()
{

   Animal a1;
   a1.speak();



   Dog d1;
   d1.speak();
   d1.bark();

   germanSephard g1;
   g1.speak();
   g1.bark();
   g1.sound();


    return 0;
}
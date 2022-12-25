#include <bits/stdc++.h>
using namespace std;

// hybrid inheritance
// more than 1 type of inheritance

class Human
{
public:
    int age;
    int weight;

public:
    void speak1()
    {
        cout << "human speaking" << endl;
    }
};

class Animal
{
public:
    int age;
    int weight;

public:
    void speak2()
    {
        cout << "animal speaking" << endl;
    }
};

// class dog is inherited from single class inheritance
class Dog : public Animal
{

public:
    void bark()
    {
        cout << "dog is barking" << endl;
    }
};

// here class Alien is inherited from multiple classes so multiple inheritance
class Alien : public Animal, public Human
{

public:
    void sound()
    {
        cout << "alien is making sound" << endl;
    }
};

int main()
{

    Human h1;
    h1.speak1();

    Animal a1;
    a1.speak2();

    Dog d1;
    d1.speak2();
    d1.bark();

    Alien a;
    a.sound();
    a.speak1();
    a.speak2();

    return 0;
}
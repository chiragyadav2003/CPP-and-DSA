#include <bits/stdc++.h>
using namespace std;

//single inheritance 
//one parent class and one child class or we can say that one child class for one parent class
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

class Dog : public Animal{

    public:
    void bark(){
        cout<<"dog is barking"<<endl;
    }


};

int main()
{

   Animal a1;
   a1.speak();



   Dog d1;
   d1.speak();
   d1.bark();



    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Animal
{

public:
    void speak()
    {
        cout << "speaking" << endl;
    }

    void run()
    {
        cout << "running" << endl;
    }
};

//inheritance of class dog from class animal
class Dog : public Animal
{

public:
//here we have over rided speak function
//so when dog class object calls speak function then this speak function will be implemented
//it is called function over riding
    void speak()
    {
        cout << "barking" << endl;
    }
};

int main()
{
   Dog d;
   //here speak is over rided function
   d.speak();
   //here run is simply inherited function from class animal to class dog
   d.run();




    return 0;
}
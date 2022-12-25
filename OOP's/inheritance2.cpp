// public  -  protected  -> protected
#include <bits/stdc++.h>
using namespace std;

// declaration of parent class or super class
class Human
{
    // here properties are public
public:
    int weight;
    int height;

    int age;

public:
    int getAge()
    {
        return age;
    }

    int setAge(int age)
    {
        this->age = age;
    }
};

// here mode of accessing is protected and the parent class property access modifier is public
// so inherited properties of parent class in child class will be peotected
// and we can only access it only its own class or in child class
class Male : protected Human
{

public:
    string color;

    // creating getter to access protected property
    // without this we can not access it
    // and we can only access it only its own class or in child class
    int getHeight()
    {
        return this->height;
    }
};

int main()
{

    // cration of object m1
    Male m1;
    // cout<<m1.height<<endl;  // this will give error as this is now protected
    // and we can only access it only its own class or in child class

    // we can access protected properties using getter and setter concept
    cout << m1.getHeight() << endl;

    return 0;
}
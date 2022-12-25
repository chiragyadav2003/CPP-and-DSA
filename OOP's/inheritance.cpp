//public  -  public  ->  public
#include <bits/stdc++.h>
using namespace std;

//declaration of parent class or super class
class Human
{
    //here properties are public
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

//accessing super class or parent class using inheritance
//by this we can access properties of parent class in child class
//here mode of accessing is public and the parent class property access modifier is public 
//so inherited properties of parent class in child class will be public 
class Male : public Human
{

public:
    string color;
};

int main()
{
 
 //cration of object m1
    Male m1;
    //accessing properties in m1 which are not present in m1 but we can access them as we have used inheritance
    
    cout <<"color = "<< m1.color << endl;
    cout <<"age = "<< m1.age << endl;
    cout <<"height = "<< m1.height << endl;
    cout <<"height = " <<m1.weight << endl;

//setting age of object using setter
    m1.setAge(4);
    cout <<"age = " <<m1.getAge() << endl;

    return 0;
}
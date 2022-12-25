// 1.  protected  -  public  -> protected
// 2.  protected  -  protected  -> protected
// 3.  protected  -  private  -> private

#include <bits/stdc++.h>
using namespace std;

// declaration of parent class or super class
class Human
{
    // here properties are protected
protected:
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

// here mode of accessing is public and the parent class property access modifier is protected
// so inherited properties of parent class in child class will be protected
// and we can only access it only its own class or in child class
class Male : public Human
{

public:
    string color;

    // creating getter to access protected property
    // without this we can not access it
    int getHeight()
    {
        return this->height;
    }
};

// here mode of accessing is protected and the parent class property access modifier is protected
// so inherited properties of parent class in child class will be protected
// and we can only access it only its own class or in child class
class Female : protected Human
{

public:
    string color;

    // creating getter to access protected property
    // without this we can not access it
    int getAge()
    {
        return this->age;
    }
};

// here mode of accessing is protected and the parent class property access modifier is protected
// so inherited properties of parent class in child class will be protected
// and we can private properties only access it only its own class
// can not access in child class as we create further
class Sapien : private Human
{

public:
    string color;

    // creating getter to access protected property
    // without this we can not access it
    int getWeight()
    {
        return this->weight;
    }
};

int main()
{

    // cration of object m1
    // 1.  protected  -  public  -> protected
    Male m1;
    // cout<<m1.height<<endl;  //this will give error as this is now protected
    // and we can only access it only its own class and in child class

    // we can access protected properties using getter and setter concept
    cout << m1.getHeight() << endl;

    // cration of object f2
    // 2.  protected  -  protected  -> protected
    Female f1;
    //   cout<<f1.age<<endl;  //this will give error as this is now protected
    // and this is in-accessible with this context
    // and we can only access it only its own class and in child class

    // we can access protected properties using getter and setter concept
    cout << f1.getAge() << endl;

    // cration of object s1
    // 3.  protected  -  private  -> private
    Sapien s1;
    //   cout<<s1.weight<<endl;  //this will give error as this is now private
    // and this is in-accessible with this context
    // and we can only access it only its own class

    // we can access protected properties using getter and setter concept
    cout << s1.getWeight() << endl;

    return 0;
}
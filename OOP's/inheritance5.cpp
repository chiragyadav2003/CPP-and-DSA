//private  -  public  -> un-accessible
//private  -  protected  -> un-accessible
//private  -  private  -> un-accessible
#include <bits/stdc++.h>
using namespace std;

// declaration of parent class or super class
class Human
{
    // here properties are private
private:
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

//we can not access human class i.e, parent class properties as they are in-accessible
//they will be un-accessible in child class also 

// here mode of accessing is public and the parent class property access modifier is private
// so inherited properties of parent class in child class will be un-accessible
class Male : private Human
{

public:
    string color;
    
  //we are unable to access properties in child class also

    // creating getter to access protected property
    // without this we can not access it
    int getHeight()
    {
        //return this->height;  
        
        //we are unable to access properties in child class also
        
    }
};

int main()
{

  
    return 0;
}
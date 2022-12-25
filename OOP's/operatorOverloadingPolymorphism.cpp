// operator overloading
//using this we can change the working of any operator
//foe ex- '+' is generally used for adding 2 numbers 
//but by using operator overloading we can use it as for subtraction or to print any statement
#include <bits/stdc++.h>
using namespace std;

class B
{
public:
    int a;
    int b;

public:
    /*   void operator+ (B &obj) {
        int value1 = this -> a;
         int value2 = obj.a;
         cout << "output " << value2 - value1 << endl;
  }

  */

    /*
    return_type operator operator_to_be_overloaded (input_argument){
      body;
    }
    */
 
 //since '+' is binary operator so value 1 refers to 1'st value of operandi.e, a of current object
 //and value 2 refers to 2'nd value of operand i.e, objects's a value
 //in input argument we generally pass 2'nd operand details
    int operator+(B &obj)
    {  
        
        int value1 = this->a;
        int value2 = obj.a;

        // cout <<value2 - value1<< endl;
        cout << "hello world";
        return 1;
    }

//overload '()' operator
void operator () (){
    cout<<"main bracket hoon and value of a in me = "<<this->a<<endl;
}


};

int main()
{

    B obj1, obj2;
    obj1.a = 3;
    obj2.a = 6;

    obj1 + obj2;
    cout<<endl<<endl;
    obj1();


    return 0;
}

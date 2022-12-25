#include<iostream>
using namespace std;

#define PI 3.14
//macro is created in which PI equals to 3.14
//before compile time in code whereverer we use PI macro will change value of PI it to 3.14

int main()
{
    int r = 5;

    //here we created double variable
    //it will use some space in memory
    //it will affect the performance whwther it is very minimal
    //it's value also can be updated as pi= pi+1
   //double pi = 3.14;
  
  //it's value can be updated 
   //pi = pi+1;

  // double area = pi*r*r;

  //PI = PI+1;
//on above activity it will throw error 
//1value required as left operand of assignment




   double area = PI*r*r;



   cout<<"area is = "<<area<<endl;



    return 0;
}
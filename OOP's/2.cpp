#include<bits/stdc++.h>
using namespace std;

class Hero{
  public:
    //properties
   int health;

   private:
   char level;

   void print(){
    cout<<level;
   }


};

//we can access properties or data member of class using (dot) i.e, '.' operator


int main()
{
    Hero ram;
    //here we have used dot operator to acces health
    ram.health = 10;
    cout<<"health :"<<ram.health<<endl;

    //since level is private property so we can access it only with in the class
    //as used in void print as it shows no error
    
  //  cout<<"level :"<<ram.level<<endl;
    

    return 0;
}
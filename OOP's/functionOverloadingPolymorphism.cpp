#include <bits/stdc++.h>
using namespace std;

class A
{

public:
    void print()
    {
        cout << "i am a" << endl;
    }

    /*
     // function that differ only in their return type can not be overloaded
     int print(string name)
     {
         cout << "i am a" << endl;
         return 1;
     }


        //function that differ only in their return type can not be overloaded
           int print()
         {
             cout << "i am a" << endl;
             return 1;
         }


         //class member can not be re-declared
         void print()
          {
              cout << "i am a" << endl;
          }

             */

    void print(string name)
    {
        cout << "i am hero" << endl;
    }

    int print(string name, int n)
    {
        cout << "i am a" << endl;
        return n;
    }
};

int main()
{

    A obj;
    obj.print();
    char name[4] = "ram";
    obj.print(name);
    obj.print(name, 4);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class A{

private:
int a;
int b;

public:
   // method to set values of private members 
   //here we have crteated a function set which can set the values of private members
        void set(int x, int y) {
            a = x;
            b = y;
        }

void print(){
    cout<<"a = "<<this->a<<endl;
    cout<<"b = "<<this->b<<endl;
}

};


int main()
{
    //declaration of object
    A obj;
    //using declared function in class 'set' to set private data members of class
    obj.set(34,67);
    obj.print();


    return 0;
}
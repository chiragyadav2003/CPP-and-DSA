#include <bits/stdc++.h>
using namespace std;

class A
{

public:
    void func()
    {
        cout << "i am a" << endl;
    }
};

class B
{

public:
    void func()
    {
        cout << "i am b" << endl;
    }
};

class C : public A, public B
{
};

int main()
{

    C obj;

    // request for member 'func' is ambiguous

    // obj.func();
    
    //to solve request for member 'func' is ambiguous problem we use scope resolution operator = ::

    obj.A::func();
    obj.B::func();



    return 0;
}
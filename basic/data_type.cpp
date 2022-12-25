#include <iostream>
using namespace std;
int main()
{
    int a = 123;
    cout << a << endl;
    cout << sizeof(a) << endl;

    char b = 'g';
    cout << b << endl;
    cout << sizeof(b) << endl;

    bool h = true;
    cout << h << endl;

    float f = 1.12;
    cout << f << endl;
    cout << sizeof(f) << endl;

    double d = 1.1111;
    cout << d << endl;

    int size = sizeof(d);
    cout << "size of d :" << size << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{

    char ch;
    cout << "the value of character ch is :" << endl;
    cin >> ch;

    int a, b;

    cout << "the value of a is" << endl;
    cin >> a;
    cout << endl;

    cout << "the value of b is" << endl;
    cin >> b;
    cout << endl;

    switch (ch)
    {

    case '+':
        cout << a + b << endl;
        break;

    case '-':
        cout << a - b << endl;

        break;

    case '*':
        cout << a * b << endl;
        break;

    case '/':
        cout << a / b
             << endl;
        break;

    case '%':
        cout << a % b << endl;
        break;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{

    char ch;
    cout << "the value of character ch is :" << endl;
    cin >> ch;

    int num;
    cout << "the value of num is" << endl;
    cin >> num;

    cout << endl;

    switch (ch)
    {

    case '1':
        cout << "first";
        break;

    case '2':
        cout << "second"
             << " ";
        cout << endl;
        switch (num)
        {
        case 1:
            cout << "first number";
            break;
        case 2:
            cout << "second number";
            break;
        case 3:
            cout << "third number";
            break;
        }
        break;
    }
    return 0;
}
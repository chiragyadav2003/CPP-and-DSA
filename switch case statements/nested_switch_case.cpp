#include <iostream>

using namespace std;

int main()
{

    char ch = '1';

    int num = 1;

    cout << endl;

    switch (ch)
    {

    case 1:
        cout << "first";
        break;

    case '1':
        cout << "second"<<" ";
        cout<<endl;
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
#include <iostream>

using namespace std;

int main()
{

    char ch = '1';

    cout << endl;

    switch (ch)
    {

    case '1':
        cout << "second"<<" ";
      

    case 1:
        cout << "first";
        break;
    }
    return 0;
}
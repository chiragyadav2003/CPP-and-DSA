#include <iostream>
using namespace std;

int main()
{
    char name[20];

    cout << "Enter your name" << endl;
    cin >> name;
    name[2] = '\0';
    // it wil stop execution at index 2 as 2 element becomes null character

    cout << "Your name is " << name;

    return 0;
}
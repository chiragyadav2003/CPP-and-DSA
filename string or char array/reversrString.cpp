#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
        // s++;
        // e--;
    }
}

int main()
{
    char name[20];

    cout << "Enter your name" << endl;
    cin >> name;

    cout << "Your name is " << name;
    cout << endl;

    int len = getLength(name);
    cout << "length of string is " << len << endl;

    cout << "reverse of string is " << endl;
    reverse(name, len);
    cout << "your name is = ";
    cout << name;

    return 0;
}
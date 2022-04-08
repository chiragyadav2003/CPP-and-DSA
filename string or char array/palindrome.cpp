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

bool checkPalindrome(char a[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        if (a[e] != a[s])
        {
            return 0;
        }

        else
        {
            s++;
            e--;
        }
    }
    return 1;
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

    cout << endl;

    cout << "palindrome or not :";

    cout << checkPalindrome(name, len);

    return 0;
}
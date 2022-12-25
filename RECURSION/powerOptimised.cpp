#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    // base case
    if (b == 0)
        return 1;
    // base case
    if (b == 1)
        return a;

    int temp = power(a, b / 2);

    // if n is odd then n%2 will be 1
    if (b % 2)
    {
        return a * temp * temp;
    }

    // if n is even
    else
    {
        return temp * temp;
    }
}

int main()
{

    int x, n;
    cout << "enter the value of x" << endl;
    cin >> x;
    cout << "enter the value of n" << endl;
    cin >> n;

    int value = power(x, n);

    cout << "answer = " << value;

    return 0;
}
#include <iostream>

using namespace std;

void fun(int n)
{
    cout << "value of copy n before changing = " << n << endl;
    n = n + 10;
    cout << "value of copy n after changing = " << n << endl;
}

int main()
{
    int n;
    cin >> n;

    cout << "value of real n before fun call = " << n << endl;

    fun(n);
    cout << "value of real n after fun call = " << n << endl;

    return 0;
}
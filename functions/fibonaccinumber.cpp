#include <iostream>

using namespace std;

int FibonacciNumber(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    int ans = 1, a = 0, b = 1;
    for (int i = 3; i <= n; i++)
    {

        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << FibonacciNumber(n) << endl;

    return 0;
}
#include <iostream>
using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {

      if (n % i == 0)
        {
            return 0;
        }
    
    }
    return 1;
}

int main()
{
    int n;
    cout << "enter the number you want to check" << endl;
    cin >> n;

    if (isPrime(n))
    {
        cout << "number is  prime";
    }
    else
    {
        cout << "number is not prime";
    }
    return 0;
}
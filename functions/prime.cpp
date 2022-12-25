#include <iostream>

using namespace std;


// return 0 if number is not prime
// return 1 if number is prime 

bool isPrime(int n)
{

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

    cin >> n;

    cout << endl;

    if (isPrime(n))
    {
        cout << "number is prime" << endl;
    }

    else
    {
        cout << "number is not prime" << endl;
    }

    return 0;
}
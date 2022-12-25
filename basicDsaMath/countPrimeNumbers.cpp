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

int countPrimeNumbers(int n)
{
    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
        else{
            continue;
        }
    }
    return count;
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

    cout<<endl;

    cout<<"total no of prime number present upto number n are :"<<endl;

    int ans = countPrimeNumbers(n);
    cout<<ans;
    return 0;
}
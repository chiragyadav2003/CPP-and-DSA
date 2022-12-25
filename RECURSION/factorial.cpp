#include <iostream>
using namespace std;

int factorial(int n)
{

    // base condition
    if (n == 0)
    
        // as factorial of 0 is 1 so this is our baae condition
        return 1;

        // recursive relation
      return n*factorial(n-1);

      /*
      relation 1:  int smallerProblem = factorial(n - 1);
                   int biggerProblem = n * smallerProblem;

                   return biggerProblem;
    


     relation 2 :  return n*factorial(n-1);

      

      both relation 1 and relation 2 are same
       */
}

int main()
{
    int n;
    cin >> n;

    int ans = factorial(n);

    cout << "factorial = " << ans;

    return 0;
}
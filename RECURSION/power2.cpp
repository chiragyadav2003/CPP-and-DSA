#include <bits\stdc++.h>
using namespace std;

int power(int a, int b)
{
   //base case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;
  
  //if b is even
    if (b % 2 == 0)
    {
        int ans = power(a, b / 2);
        return ans * ans;
    }

// if b is odd
//as b = 5 then b/2 = 2  so we calculate power(a, b/2) i.e, power(a, 2)
//so we basically write a*(a^2)*(a^2) == a^5
    else
    {
        int ans = power(a, b / 2);
        return a * ans * ans;
    }
}

int main()
{

    int a, b;

    cin >> a >> b;

    int ans = power(a, b);

    cout << "power = " << ans << endl;

    return 0;
}
#include <iostream>
using namespace std;

int stair(int n)
{
    // base case
    //as there is no way to go below 0'th stair
    if (n < 0)
        return 0;

    //as there is only one way to reach at 0'th stair
    //as we are already standing at 0'th stair
    if (n == 0)
        return 1;

     //recursive relation
     //at n'th stair it can arrive by 2 methods
     //by taking single jump from (n-1)'th stair or by taking double jump from (n-1)'th stair   

    int ans = stair(n - 1) + stair(n - 2);

    return ans;
}

int main()
{
    int n;
    cout << "enter the value of stair on which you want to go" << endl;

    cin >> n;

    int ans = stair(n);
    cout << "no of ways to reach at stair is :" << endl;

    cout << ans << endl;

    return 0;
}
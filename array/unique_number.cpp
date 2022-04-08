#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[9] = {2, 6, 4, 2, 6, 9, 4};

    int ans = 0;

    for (int i = 0; i < 9; i++)
    {
        ans = ans ^ arr[i];
    }

    cout << "unique number is = " << ans;

    return 0;
}
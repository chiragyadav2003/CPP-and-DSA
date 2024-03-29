#include <iostream>
#include <queue>
using namespace std;

int solve(int arr[], int n, int k)
{

    deque<int> maxi;
    deque<int> mini;
    int ans = 0;

    // process for first k size window
    for (int i = 0; i < k; i++)
    {

        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while (!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }

    // store ans for first window
    ans += arr[maxi.front()] + arr[mini.front()];

    for (int i = k; i < n; i++)
    {
        // removal logic from front
        if (maxi.front() - i >= k)
            maxi.pop_front();

        if (mini.front() - i >= k)
            mini.pop_front();

        // removal from back
        while (!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        // addition of new elements
        maxi.push_back(i);
        mini.push_back(i);

        ans += arr[maxi.front()] + arr[mini.front()];
    }

    return ans;
}

int main()
{

    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;

    cout << solve(arr, 7, k) << endl;

    return 0;
}
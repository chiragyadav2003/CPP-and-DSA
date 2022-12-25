#include <bits\stdc++.h>
using namespace std;

void sort(vector<int> &arr, int n)
{
    // base case  -->  already sorted
    if (n == 0 || n == 1)
        return;

    // we solve for 1 case and recursion will handle remaining case
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // recursive call

    sort(arr, n - 1);
}

int main()
{
    vector<int> arr{1, 3, 6, 2, 9, 7, 5};

    sort(arr, arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}
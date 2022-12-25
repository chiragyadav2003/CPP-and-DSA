// print sum of elements of array using vector and recursion
#include <bits\stdc++.h>
using namespace std;

int printSum(vector<int> &arr, int i, int size)
{
    if (size == 0)
        return 0;

    if (size == 1)
        return arr[i];

    int sum = arr[i];

    return sum + printSum(arr, i + 1, size - 1);
}

int main()
{
    vector<int> arr{1, 2, 3,4,5};

    int size = arr.size();

    cout << "sum of elements in array is = " << printSum(arr, 0, size);

    return 0;
}

// here we checked whether an array is sorted or not using vector and recursion
#include <bits\stdc++.h>
using namespace std;

bool checkSorted(vector<int> arr, int i, int size)
{
    if (size == 0 || size == 1)
        return true;

    if (arr[i] > arr[i+1])
        return false;

    return checkSorted(arr, i+1, size - 1);
}

int main()
{

    vector<int> arr{2, 3, 1, 6, 8, 9, 11, 33, 55};

    int size = arr.size();

    bool ans = checkSorted(arr, 0,  size);

    if(ans)
    cout<<"array is sorted";

    else
    cout<<"array is not sorted";

    return 0;
}
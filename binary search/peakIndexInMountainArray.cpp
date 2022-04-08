#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[7] = {1, 3, 5, 7, 9, 7, 5};

    cout << "index of peak element in array is " << peakIndexInMountainArray(arr, 7);
    return 0;
}
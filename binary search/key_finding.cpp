#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int even[6] = {1, 3, 5, 7, 9, 14};

    int odd[5] = {2, 3, 5, 7, 8};

    int evenIndex = binarySearch(even, 6, 7);
    cout << "for even array index no. = " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 8);
    cout << "for odd array index mo. = " << oddIndex << endl;
    return 0;
}
#include <iostream>

using namespace std;

int getMin(int arr[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int getMax(int arr[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{

    int arr[10] = {1, 33, 2, 5, 4, 9, 8, 6, 88, -3};
    int n = 10;

    int min = getMin(arr, n);
    cout << "min = " << min << endl;

    int max = getMax(arr, n);
    cout << "max = " << max << endl;

    return 0;
}
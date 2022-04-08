#include <iostream>

using namespace std;

void reverse(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[6] = {-1, 34, 2, 65, 0, 11};

    int pqr[5] = {4, 23, 76, 45, 31};

    reverse(arr, 6);

    reverse(pqr, 5);

    print(arr, 6);

    print(pqr, 5);

    return 0;
}
#include <iostream>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int even[8] = {1, 4, 32, 56, 7, 4, 34, 54};

    int odd[5] = {33, 65, 23, 11, 21};

    swapAlternate(even, 8);

    printArray(even, 8);

    cout << endl;
    swapAlternate(odd, 5);

    printArray(odd, 5);

    return 0;
}
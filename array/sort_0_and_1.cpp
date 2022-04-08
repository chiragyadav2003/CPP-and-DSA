#include <bits/stdc++.h>
using namespace std;

int printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(int arr[], int n)
{

    int i = 0, j = n - 1;

    while (i < j)
    {

        if (arr[i] == 0)
        {
            i++;
        }

        else if (arr[j] == 1)
        {
            j--;
        }

        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
        }
    }
}

int main()
{

    int arr[9] = {1, 0, 0, 1, 1, 0, 1, 1, 0};

    sortArray(arr, 9);

    printArray(arr, 9);
    return 0;
}
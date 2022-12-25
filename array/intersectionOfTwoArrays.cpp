#include <bits/stdc++.h>

using namespace std;

void intersection(int arr1[], int n1, int arr2[], int n2)
{
    for (int i = 0; i < n1; i++)
    {
        int temp = arr1[i];
        for (int j = 0; j < n2; j++)
        {
            if (temp == arr2[j])
            {
                cout << temp << " ";
                arr2[j] = INT_MAX;
                break;
            }
        }
    }
}

int main()
{

    int arr1[7] = {2, 4, 7, 2, 9, 8, 5};

    int arr2[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    cout << "the common element in both array are as follows i.e, their intersection is :" << endl;

    intersection(arr1, 7, arr2, 8);

    return 0;
}
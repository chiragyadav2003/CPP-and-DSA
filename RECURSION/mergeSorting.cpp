#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int m, int e)
{
   // here  e-s+1  is size of vector in which sorted elements are stored
    vector<int> ans(e - s + 1);
    int i = s, j = m + 1, k = 0;

    while (i <= m && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            ans[k] = arr[i];
            i++;
        }

        else
        {
            ans[k] = arr[j];
            j++;
        }

        k++;
    }

    while (i <= m)
    {
        ans[k] = arr[i];
        i++;
        k++;
    }

    while (j <= e)
    {
        ans[k] = arr[j];
        j++;
        k++;
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = ans[i - s];
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{
    //base condition
    if (s >= e)
        return;

    int m = (s + e) / 2;
   //sort left part up to mid
    mergeSort(arr, s, m);

    //sort right part after mid
    mergeSort(arr, m + 1, e);

//merge sorted arrays
    merge(arr, s, m, e);
}

int main()
{
    vector<int> arr{2, 3, 4, 1, 8, 7, 6, 4, 5, 6, 0, 9, 8, 4, 5, 6, 7, 3, 4, 5, 2, 1, 3, 2, 1};
    int s = 0;
    int e = arr.size() - 1;

    mergeSort(arr, s, e);

    for (int i = 0; i <= e; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}
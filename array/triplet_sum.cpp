#include <bits/stdc++.h>
using namespace std;

int tripletSum(int arr[], int n, int s)
{
    int ans;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            for (int k = i + 2; k < n; k++)
            {

                if ((arr[i] + arr[j] + arr[k] == s) && (arr[i] != arr[j]) && (arr[j] != arr[k]) && (arr[i] != arr[k]))
                {
                    ans = arr[i], arr[j], arr[k];
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
    return ans;
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    tripletSum(arr, 9, 9);

    return 0;
}
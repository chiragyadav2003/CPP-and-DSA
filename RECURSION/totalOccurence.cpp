#include <bits\stdc++.h>
using namespace std;

int total(vector<int> &arr, int i, int num)
{

    int count = 0;

    if (i == arr.size())
        return 0;

    if (arr[i] == num)
        count++;

    return count + total(arr, i + 1, num);
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 7, 6,3,3,3,5, 4, 1, 2, 9, 8, 6, 7, 9, 3, 4, 6};

    int i = 0;
    int num;
    cin >> num;

    int ans = total(arr, i, num);

    cout << "total occurence is = " << ans;

    return 0;
}
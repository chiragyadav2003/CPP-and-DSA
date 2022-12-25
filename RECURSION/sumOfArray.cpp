#include <bits\stdc++.h>
using namespace std;

int getSum(int arr[], int size)
{

    //base condition
    if (size == 0)
    {
        return 0;
    }

    if(size == 1){
        return arr[0];
    }

    int sum = arr[0];
    sum += getSum(arr + 1, size - 1);
    return sum;
}

int main()
{
    int arr[6];

    int size = 6;

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl;
    int ans = getSum(arr, size);
    cout << "sum is = ";
    cout << ans;

    return 0;
}
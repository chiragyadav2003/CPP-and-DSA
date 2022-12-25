#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    cout << "size of array is = " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "    ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int n, int k)
{
    print(arr, n);

    // base condition
    if (n == 0)
        return false;

    if (arr[0] == k)
        return true;

    else
    {
        bool remainingPart = linearSearch(arr + 1, n - 1, k);
        return remainingPart;
    }
}

int main()
{
    int arr[5];

    int n = 5;

    cout << "enter the input for array" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "array is as follows :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
  cout<<endl;

    int key;
    cout << "enter the value of key you want to searh in array :" << endl;
    cin >> key;
    cout<<endl;

    bool ans = linearSearch(arr, n, key);

    if (key)
    {
        cout << "key is present";
    }

    else
    {
        cout << "key is not present";
    }

    return 0;
}
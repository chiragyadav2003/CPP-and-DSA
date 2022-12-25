#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int s, int e, int k)
{

    cout << endl;

    // cout<<"array is as follows :"<<endl;
    print(arr, s, e);
    cout << endl;

    // base case

    // element not found
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;
    cout<<endl<<"value of arr[mid] is = "<<arr[mid]<<endl;
    // element found
    if (arr[mid] == k)
        return true;

    // recrsive rlation call
    // we search in right part
    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }

    // we search in left part
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{

    int arr[11] = {2, 4, 6, 7, 8, 9, 11, 13, 15 ,19, 22};
    int size = 11;
    int key = 22;

    bool ans = binarySearch(arr, 0, size-1, key);

    if (ans)
    {
        cout << "key is present";
    }

    else
    {
        cout << "key is not present";
    }

    //  cout << "present or not   " << binarySearch(arr, 0, size - 1, 11);

    return 0;
}

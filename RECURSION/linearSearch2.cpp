// linear search using vector and recursion
#include <bits\stdc++.h>
using namespace std;

bool search(vector<int> &arr, int i, int size, int key)
{

    if (size < 0)
        return 0;

    if (arr[i] == key)
        return 1;

    return search(arr, i + 1, size - 1, key);
}

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 33, 22, 44, 55, 8, 9, 66, 7};

    int size = arr.size();

    bool ans = search(arr, 0, size, 2);

    if (ans)
        cout << "key is present";

    else
        cout << "key is not present";

    return 0;
}
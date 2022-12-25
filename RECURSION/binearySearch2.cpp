#include <bits\stdc++.h>
using namespace std;

bool find(vector<int> &arr, int s, int e, int key)
{
    if (s > e)
        return 0;

    int mid = s + (e - s) / 2;
    cout << "mid element is = " << arr[mid] << endl;

    if (arr[mid] == key)
        return 1;

    if (arr[mid] > key)
    {
        return find(arr, s, mid - 1, key);
    }

   // if (arr[mid] < key)
   // {
   //    return find(arr, mid + 1, e, key);
   //}

    else{
     return find(arr, mid + 1, e, key);
    }

}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 45, 55, 56, 67, 78};

    int s = 0, e = arr.size() - 1;
    int key;
     cout <<"enter the value of key"<< endl;
    cin >> key;
    cout<<endl;
   

    bool ans = find(arr, s, e, key);

    if (ans)
        cout << "key is present";

    else
        cout << "key is not present";

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array required = ";
    cin >> size;

    int arr[50];

    int ans = 0;

    cout << "array elements are as follows = " << endl;
    ;

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];

        ans = ans + arr[i];
    }

    cout << "the sum array elements is = " << ans;

    return 0;
}
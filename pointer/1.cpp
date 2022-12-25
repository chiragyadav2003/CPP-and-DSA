#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n)
{

  // here array is passed as pointer

  // here it will return size of pointer

  cout << "*** size = " << sizeof(arr) << "***";

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};

  int value = getSum(arr, 5);
  cout << "sum = " << value;

  return 0;
}

// here in offline mode it shows errror
// in online it run succesfully
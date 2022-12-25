#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
  //give pivot element
    int pivot = arr[s];

    int cnt = 0;
//to count element smaller than or equal to pivot
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            cnt++;
    }
  
//it will give right index for pivot
    int pivotIndex = s + cnt;

//swapping arr[s] with arr[pivotIndex]  so that it will be on its right place
    swap(arr[pivotIndex], arr[s]);

//using 2 pointer i and j
//i in9itialised with s as i=s    and j initialised with with e as j = e;
//i++  and   j--   
//by this type we will use these two poointer
    int i = s;
    int j = e;

//it will print count of element small than pivot
      cout<<"count = " <<cnt<<endl;

      //it will print correct index for pivot element
      cout<<"pivotIndex = "<<pivotIndex<<endl;
    

    //it will print array when swapping is done of arr[s] with arr[pivotIndex]
     for (int i = 0; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl<<endl;

//here we sort array 
//so that element smaller than or equal to pivot will be on left side and element greater than pivot will be on right side
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

   //here we will print array in such a way that
   //so that element smaller than or equal to pivot will be on left side and element greater than pivot will be on right side
    
     for (int i = 0; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl<<endl;

    return pivotIndex;
}

void quickSort(vector<int> &arr, int s, int e)
{
//base case
    if (s >= e)
        return;

//partition karenge
    int p = partition(arr, s, e);

//solve left part 
    quickSort(arr, s, p - 1);

    //solve right part
    quickSort(arr, p + 1, e);
}

int main()
{
    vector<int> arr{2,3,4,9,8,7,6,7,8,9,1,2,3,4,7,8,9,6,5,4};

    int s = 0;
    int e = arr.size() - 1;

    quickSort(arr, s, e);

    for (int i = 0; i <= e; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
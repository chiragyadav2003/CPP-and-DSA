#include <iostream>
using namespace std;
int main()
{

   /* int arr[10] = {23, 122, 41, 67};

    // int*p = &arr;

    cout << "first memory address = " << arr << endl;
    cout << "first memory address = " << &arr[0] << endl;
    cout << "first element of array = " << *arr << endl;
    cout << "first element of array = " << arr[0] << endl;

    // printing using different approach
    // since we know that arr[i] = *(arr+i)
    cout << "first element of array = " << *(arr) << endl;
    cout << "second element of array = " << *(arr + 1) << endl;
    cout << "second element of array = " << arr[1] << endl;
    cout << "size of array is = " << sizeof(arr) << endl;
    cout << "size of pointer is = " << sizeof(&arr[0]) << endl;
    cout << "size of element is = " << sizeof(arr[1]) << endl;

    // new method
    int i = 3;
    cout << "3 index element value = " << i[arr]<<endl;
    cout << "3 index element value = " << *(i + arr)<<endl;


    */


   int arr[10] = {1,2,3,4,5} ;
   int*ptr = &arr[0];
   cout<<arr<<endl;
   cout<<&arr<<endl;
   cout<<&arr[0]<<endl;
  
  //error throw by compiler as symbol table of array can not be changed
  // arr = arr+1;
   //cout<<arr<<endl;

   cout<<ptr<<endl;
   cout<<*ptr<<endl;
   cout<<&ptr<<endl;

//now pointer is shift 4 bytes ahead
   ptr = ptr+1;
   cout<<ptr<<endl;


    return 0;
}
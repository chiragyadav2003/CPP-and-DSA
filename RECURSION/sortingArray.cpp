#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
//base condition
if(size == 0  ||  size == 1)
return true;


if(arr[0]>arr[1])
  return false;

  else{
      bool remainingPart = isSorted(arr+1, size-1);
      return remainingPart;
  }

}

int main()
{
  int arr[5] ;

  int size = 5;
 
  for(int i=0; i<5; i++){
      cin>>arr[i];
  }
cout<<endl;
  for(int i=0; i<5; i++){
      cout<<arr[i]<<"  ";
  }
cout<<endl;

bool ans = isSorted(arr, size);

if(ans)
cout<<"array is sorted"<<endl;

else
cout<<"array is not sorted"<<endl;

    return 0;
}
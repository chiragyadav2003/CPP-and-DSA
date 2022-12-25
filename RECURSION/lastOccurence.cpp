#include <bits\stdc++.h>
using namespace std;

int index(vector<int>&arr, int i, int num){
    if(i <0)
      return -1;


      if(arr[i] == num)
      return i;


      return index(arr, i-1, num);



}     

int main()
{
    vector<int> arr{1,4,3,6,5,2,7,8,9,2,3,4,5,8,7,1};

    int size = arr.size();

    int i=size-1;

    int num;
    cout<<"enter the number for which you want last occurence = ";
    cin>>num;

    cout<<endl;

   cout<<"element preesent at index = "<<index(arr, i, num);
   cout<<endl;

    return 0;
}
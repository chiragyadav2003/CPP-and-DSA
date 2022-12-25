#include<iostream>
using namespace std;

// here default argument will print array from index no equal to start if value of start is given
//otherwise in default case it will print whole array
void print(int arr[], int n, int start = 0){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
   int arr[5] = {1,2,3,4,5};
   int size = 5;
cout<<"when value of start is not given :"<<endl;
// it will print whole array
print(arr, size);
cout<<endl;
cout<<"when value of start is given :"<<endl;
//it will print from index no equal to start to last
print(arr, 5, 2);


    return 0;
}
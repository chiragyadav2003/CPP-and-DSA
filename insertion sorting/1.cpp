#include<iostream>
using namespace std;

void insertionSorting(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j]>temp)
            // shift
            arr[j+1] = arr[j];

            else{
                break;
            }

        }
        //copy temp value
        arr[j+1] = temp;
        //it implies that as since 
        //j+1 = i
        //implies arr[i] on right place
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {7,5,3,9,1};

    insertionSorting(arr, 5);

    printArray(arr, 5);

    return 0;
}
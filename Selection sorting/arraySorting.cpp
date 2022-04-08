#include<iostream>
using namespace std;

void selectionSorting(int arr[], int n){
    for(int i=0; i<n; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex])
            minIndex = j;
        }
        swap(arr[i],arr[minIndex]);
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7] = {5,3,9,7,2,8,4};

    selectionSorting(arr, 7);

    cout<<endl;

    printArray(arr, 7);
    return 0;
}
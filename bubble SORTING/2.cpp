#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    // for round n to n-1 
    for(int i=1; i<n; i++){

        bool swapped = false;

        //process element till n-i index
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);

            swapped = true;
            }
        }

        if(swapped == false){
            //already sorted
            break;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int abc[6] = {5,3,7,8,2,1};

    bubbleSort(abc, 6);

    cout<<"bubble sorted array is = ";

    printArray(abc, 6);
    return 0;
}

//we introduce bool as if array is already sorted we do not have to traverse through it
//sorted aray will be the best case
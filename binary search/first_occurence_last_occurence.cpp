#include<iostream>
using namespace std;

int firstOccur(int arr[], int size, int key){
    int start = 0, end = size-1;
    int ans = 2;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }

        if(arr[mid]>key){
            end=mid-1;
        }

        if(arr[mid]<key){
            start=mid+1;
        }

        mid = start + (end-start)/2;

        }
        return ans;
}

int lastOccur(int arr[], int size, int key){
    int start = 0, end = size-1;
    int ans = 2;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }

        if(arr[mid]>key){
            end=mid-1;
        }

        if(arr[mid]<key){
            start=mid+1;
        }

         mid = start + (end-start)/2;

    }

        return ans;
    }

    int main(){

        int arr[8] = {1,2,4,4,4,4,4,6};

        cout<<"first occurence of key is at index "<<firstOccur(arr, 8, 4);

        cout<<endl;
        

        cout<<"last occurence of key is at index "<<lastOccur(arr, 8, 4);
       
       return 0;
    
    }


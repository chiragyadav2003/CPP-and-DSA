#include <bits/stdc++.h>
using namespace std;

int pairSum(int arr[], int n, int s){
    int ans;
    for(int i=0; i<n; i++){
        
        for(int j=i+1; j<n; j++){
            
            if(arr[i]+arr[j] == s){
                ans = arr[i] , arr[j];
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return ans;
}


int main() {
    int arr[5] = {1,2,3,4,7};
    
    pairSum(arr, 5,5);
    

    return 0;
}

//here only array is used to find pair sum
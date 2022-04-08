#include <bits/stdc++.h>

using namespace std;

int findDuplicate(int arr[], int n){
    int ans = 0;
    
    //xor all array elements
    for(int i = 0;i<n;i++){
        ans = ans^arr[i];
    }
    
    for(int i = 1;i<n;i++){
        ans = ans^i;
    }
    
    return ans;
}

int main()
{
    int arr[8] = {1,2,3,4,5,6,7,4};
    
    findDuplicate(arr, 8);
    
    int value = findDuplicate(arr, 8);
    
    cout<<"duplicate number is = "<<value;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int getSum(int*arr, int n){

    //here array is passed as pointer 
    
    //here it will return size of pointer
    

      cout<<"*** size = "<<sizeof(arr)<<"***";

    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;


}

int main(){
int arr[5] = {1,2,3,4,5};

//here we had pass a part of an array
//it will print sum of elemnte on 3 index and after it

int value = getSum(arr+3, 2);
cout<<"sum = "<<value;

return 0;
}


//here in offline mode it shows errror 
//in online it run succesfully
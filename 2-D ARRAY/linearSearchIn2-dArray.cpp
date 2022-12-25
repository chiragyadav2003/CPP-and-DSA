#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int n, int m){
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == target)
            return 1;            
        }
    }
return 0;

}


int main(){
    //create 2-d array
    int arr[3][4];

   
     
    // taking input row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cout<<"enter the element you want to search "<<endl;
    cin>>target;
    cout<<endl;

    if (isPresent(arr, target, 3, 4)){
        cout<<"element is present";
    }
    else{
        cout<<"element is not present";
    }



  
return 0;

}
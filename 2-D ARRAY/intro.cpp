#include<iostream>
using namespace std;
int main(){
    //create 2-d array
    int arr[3][4];

    //row wise output
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,11,22,33};
     
     //by this we can fix that what element we want to keep in which row
   // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
     
     
    // taking input row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    

/*
    //taking input column wise
     for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin>>arr[j][i];
        }
    }
    */
    
    

    //for print
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



  
return 0;

}
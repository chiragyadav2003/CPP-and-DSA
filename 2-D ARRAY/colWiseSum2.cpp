#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3], int target, int n, int m){
     for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            if(arr[row][col] == target)
            return 1;            
        }
    }
return 0;

}

void printColSum(int arr[][3], int n, int m){
       for(int col=0; col<m; col++){
            int ans = 0;
        for(int row=0; row<n; row++){
         ans+=arr[row][col];
        }
        cout<<ans<<" ";
    }
    
    cout<<endl;
}


int main(){
    //create 2-d array
    int arr[3][3];

   
     
    // taking input row wise
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++)
            cin>>arr[row][col];
        }

    cout<<"array created is as follows :"<<endl;

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }



    int target;
    cout<<"enter the element you want to search "<<endl;
    cin>>target;
    cout<<endl;

    if (isPresent(arr, target, 3, 3)){
        cout<<"element is present";
    }
    else{
        cout<<"element is not present";
    }

    cout<<endl;
    

   
   cout<<"sum of col wise elements is as follows :"<<endl;

   printColSum(arr, 3, 3);

  
return 0;

}
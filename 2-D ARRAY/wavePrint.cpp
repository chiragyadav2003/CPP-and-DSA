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

void printSum(int arr[][3], int n, int m){
       for(int row=0; row<m; row++){
            int ans = 0;
        for(int col=0; col<n; col++){
         ans+=arr[row][col];
        }
        cout<<ans<<" ";
    }
    
    cout<<endl;
}

int largestSum(int arr[][3], int n, int m){
       int maxi = INT_MIN;
       int rowIndex = -1;
        
      for(int row=0; row<m; row++){
          int ans = 0;
           
        for(int col=0; col<n; col++){
         ans+=arr[row][col];
        }

        //cout<<ans<<" ";

        if(ans > maxi){
            maxi = ans;
            rowIndex = row;
        }
      }
        
        cout<<"max sum of row elements in array is :"<<maxi;
        cout<<endl;
        cout<<"row number is :";
        return rowIndex;

}
 
 int wavePrint(int arr[][3], int n, int m ){
     //vector<int> ans;
     for(int col = 0; col<m; col++){

         if( col&1 ){
             //odd number of column case and we will be going from bottom to top
             for(int row=n-1; row>=0; row--){
                 cout<<arr[row][col]<<" ";
                  //ans.push_back(arr[row][col]);
             }
         }
      
      else{
          // o and even number column case and we will be going from top to bottom
          for(int row=0; row<n; row++){
               cout<<arr[row][col]<<" ";
              //ans.push_back(arr[row][col]);
          }
      }
     
     }
     
    // return ans;

 }



int main(){
    //create 2-d array
    int arr[3][3];

   
     cout<<"enter input value for array  "<<endl;
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
    

   
   cout<<"sum of row wise elements is as follows :"<<endl;

   printSum(arr, 3, 3);

   int value = largestSum(arr, 3, 3);
   
   cout<<value;

   cout<<endl;

   cout<<"answer in wave form is as follows :"<<endl;
   
   wavePrint(arr, 3, 3);
   

  
return 0;

}
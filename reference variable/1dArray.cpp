#include<iostream>
using namespace std;

int getSum(int*arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    return sum;
}
int main()
{
    int n;
    cin>>n;
   
   //declaration of variable size array using heap memory
    int*arr = new int[n];

  //taking input in array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

//printing array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

int ans = getSum(arr, n);
cout<<ans;


}
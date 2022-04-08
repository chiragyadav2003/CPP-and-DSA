#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"prime number";
        }

        else if(n%i!=0){
            cout<<"not prime number for i:"<<i<<endl;
        }
    }
    return 0;
}
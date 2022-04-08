#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    if(a>b){
        cout<<"a is good";
    }   
    
    else if(a<b){
        cout<<"b is good";
    }

    else{
        cout<<"both are average";
    }
    return 0;
}
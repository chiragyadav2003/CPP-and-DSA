#include<iostream>
using namespace std;

// here value is pass by value
// so fun copy is created 
// no effect on value of main fun
void update1(int n){
    n++;
}

//here it is pass by reference
// so actual value of main fun is affected
void update2(int &n){
    n++;
}

int main(){
    int n=5;

    cout<<"before any operation n = "<<n<<endl;
    update1(n);
    cout<<"after update1 n = "<<n<<endl;
    update2(n);
    cout<<"after update2 n = "<<n<<endl;

    return 0;
}
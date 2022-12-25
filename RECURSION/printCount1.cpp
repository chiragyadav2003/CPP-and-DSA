#include<iostream>
using namespace std;

//it is head recursion as recursive relation is above processing

void print(int n){
    //base condition
    if(n == 0)
    return ;

  //recursive relation
    print(n-1);

    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;

    cout<<endl;

    print(n);

    return 0;
}
   

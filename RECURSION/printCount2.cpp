#include<iostream>
using namespace std;

//it is tail recursion as recursive relation is below processing

void print(int n){
    //base condition
    if(n == 0)
    return ;

     cout<<n<<endl;

  //recursive relation
    print(n-1);

   
}

int main(){
    int n;
    cin>>n;

    cout<<endl;

    print(n);

    return 0;
}
   

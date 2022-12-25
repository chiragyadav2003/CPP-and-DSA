#include<iostream>
using namespace std;

int fib(int n){
    ///base case
    // here series start from 0'th index as first term is for n = 0
    //so output is different from series 0 1 1 2 3 5 8 13 21 
    //here is 0 is for 0'th term same as 2 for 3'rd term(not 4'th term)
    if(n == 0)
    return 0;

    if(n == 1)
    return 1;
   
   //recursive relation
    int value = fib(n-1)+fib(n-2);
    return value;
}

int main()
{
    int n;
    cin>>n;

    int ans = fib(n);
    cout<<ans<<endl;

    return 0;
}
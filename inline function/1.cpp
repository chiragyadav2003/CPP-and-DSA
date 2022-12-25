#include<iostream>
using namespace std;

inline int getMax(int a, int b){

    return (a>b) ?  a:b;
}

// if our inline function is run with compiler then 
//inline function will change the call of function b function body
//it work as like macro works

int main()
{
int a=1, b=2;
int ans = 0;

ans  =  getMax(a, b);
cout<<ans<<endl;


a = a+3;
b = b+1;


ans  =  getMax(a, b);
cout<<ans<<endl;


return 0;
}



/*

tertiary operator:

if(a>b){
    cout<<a<<endl;
}
else{
    cout<<b<<endl;
}

we can change above code in single line using tertiary operator

(a>b) ? a:b ;

it's ayntax is as  (condition) ?  true : false

so if a>b  then it will return a  
otherwise it will return b



*/
#include<iostream>
using namespace std;
int main()
{
   
   char n;
   cin >> n;

   if( n>='A' && n<='Z' ){
       cout<<"this is upper case";
   }
  
  else if( n>='a' &&  n<='z'){
       cout<<"this is lower case";
   }
   
   
   else if( n>='1' && n<='9' ){
       cout<<"this is numeric case";
   }
    return 0;
}

//this code has error
#include<iostream>
using namespace std;
int main(){
    int i = 5;
   
  /*  int*p = &i;
    int*a = p;
     
    cout<<p<<endl;
    cout<<"before = "<<a<<endl;
    a++;
    cout<<"after = "<<a<<endl;
    */

   int a = i;
   //here for a the value of i is copied
   //it is call by value or pass by value

   cout<<"value of a before = "<<i<<endl;
   a++;
   cout<<"value of a after = "<<i<<endl;

   int*p = &i;
    cout<<"before = "<<i<<endl;
    //here *p and i are same things
    //both holds 5
   (*p)++;
   cout<<"after = "<<i<<endl;

   //copying a pointer
   cout<<"here vector is copied"<<endl;

   int*q = p;
   cout<<"address stored by them = ";
   cout<<q<<"-"<<p<<endl;
   cout<<"using de-reference operator value stored in them is = ";
   cout<<*q<<"-"<<*p<<endl;
    
//important concept
int n = 5;
int*r = &n;
//cout<<*r++<<endl;
//cout<<(*r)++<<endl;
*r = *r+1;
cout<<*r<<endl;
cout<<"before r "<<r<<endl;
r = r+1;
cout<<"after r "<<r<<endl;

    return 0;
}
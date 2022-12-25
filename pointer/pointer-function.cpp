#include<iostream>
using namespace std;

void print(int*p){
    cout<<"address = "<<p<<endl;
    cout<<"value = "<<*p<<endl;
}

void update(int*p){
  //  p=p+1;
   // cout<<"inside function = "<<p<<endl;

    
    *p = *p + 1;
    //here pointer address will be same but value at that address will be updated
    cout<<"value = "<<*p<<endl;
    
}

int main(){
    int a = 5;

   /* int*b = &a;

    print(b);

    */

   int *p = &a;
   cout<<"before = "<<p<<endl;   
   cout<<"before = "<<*p<<endl;   
   update(p);
   cout<<"after = "<<p<<endl;
   cout<<"after = "<<*p<<endl;


    return 0;
}
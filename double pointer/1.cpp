#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 2;
    int*p = &a;
    int**q = &p;

    cout<<endl<<"all right"<<endl<<endl;

    //print value of a i.e, 2
    cout<<"value of a :"<<endl;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<endl<<endl;

    //address of a
    cout<<"address of a :"<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;

    cout<<endl<<endl;

    //address of p
    cout<<"address of pointer p"<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;

    cout<<endl<<endl;


    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int*ptr = &num;

    cout<<"address of num is = "<<ptr<<endl;
    cout<<"value of num is = "<<*ptr<<endl;
    // *ptr is dereference operator
    // it stores value corrospond to address which is pointed by pointer ptr 

     cout<<"address of num is = "<<&num<<endl;
    cout<<"value of num is = "<<num<<endl;

    cout<<"size of pointer ptr is = "<<sizeof(ptr)<<endl;
    cout<<"size of num is = "<<sizeof(num)<<endl;

    double d = 5.2;
    double*p2 = &d;
    
     cout<<"address of double is = "<<p2<<endl;
    cout<<"value of double is = "<<*p2<<endl;
    
    cout<<"size of pointer p2 is = "<<sizeof(p2)<<endl;

    //in form of array
    cout<<"in form of array :"<<endl;
  
int arr[5] = {1,2,3,4,5};
cout<<"first location address is as follows = ";
cout<<arr<<endl;
cout<<"address of 0'th index element = ";
cout<<&arr[0]<<endl;

    return 0;
}
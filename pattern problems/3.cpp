#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 cout<<endl;

 int i=1;

 while(i<=n){
     int j=1;
     while(j<=n){
         cout<<j;
         j=j+1;
     }
     cout<<endl;
     i=i+1;
 }
    return 0;
}

/* 1234
   1234
   1234
   1234
   */
  //for n=4
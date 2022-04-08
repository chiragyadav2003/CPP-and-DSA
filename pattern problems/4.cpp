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
         cout<<n-j+1;
         j=j+1;
     }
     cout<<endl;
     i=i+1;
 }
    return 0;
}

/* 321
   321
   321
   */
  //for n=3
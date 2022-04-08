
#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 cout<<endl;

 int row=1;

 while(row<=n){
     int col=1;
   
     
     while(col<=n){
           
     char ch = 'A'+col-1;

     //here output depend on no of column
     //so write it under column portion
     //as it is independent of row

         cout<<ch<<" ";
       
         col=col+1;
     }
     cout<<endl;
     row=row+1;
 }
    return 0;
}
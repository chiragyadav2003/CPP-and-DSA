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
     
     char ch = 'A'+row-1;

     //here output depends only on no. of row 
     //so we write it in row portion
     
     while(col<=n){
         cout<<ch<<" ";
        
         col=col+1;
     }
     cout<<endl;
     row=row+1;
 }
    return 0;
}
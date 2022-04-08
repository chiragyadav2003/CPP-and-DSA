
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
     int p=row+col-1;
     
     while(col<=row){
         cout<<p<<" ";
        p=p+1;
         col=col+1;
     }
     cout<<endl;
     row=row+1;
 }
    return 0;
}
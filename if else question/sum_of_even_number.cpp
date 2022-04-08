#include<iostream>
using namespace std;
int main()
{
 
 int n;
 cout<<"enter the number upto which you want sum"<<endl;
 cin>>n;
cout<<endl;

int i=2,s=0;

while(i<=n){
    s=s+i;
        i=i+2;
}


cout<<s<<endl;
    return 0;
}
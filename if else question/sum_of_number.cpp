#include<iostream>
using namespace std;
int main()
{
 
 int n;
 cout<<"enter the number upto which you want sum"<<endl;
 cin>>n;
cout<<endl;

int i=1,s=0;

while(i<=n){
    s=s+i;
        i=i+1;
}


cout<<s<<endl;
    return 0;
}
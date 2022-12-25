#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 5;

    // creating a reference variable
    int&b = i;

    cout<<i<<endl;
    b++;
    cout<<i<<endl;
    cout<<b<<endl;
    i++;
    cout<<b<<endl;
    cout<<i<<endl;

    return 0;
}
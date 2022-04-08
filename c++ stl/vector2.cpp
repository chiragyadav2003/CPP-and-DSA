#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    a.push_back(3);
     for(int i:a){
        cout<<i<<" ";
    }

}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        //pehle space print kar lete hain
        int space=1;
        while(space<=n-row){
            cout<<" ";
            space=space+1;
        }
        
        //now print *
        int col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

    
    return 0;
}
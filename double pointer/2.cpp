#include<bits/stdc++.h>
using namespace std;

void update(int**p){
   // p = p+1;
    //kuch change hoga - no, kuch change nhi hoga

    //*p = *p+1;
    //kuch change hoga - yes

   **p = **p+1;
    //kuchchange hoga - yes
}

int main(){
    int a = 5;
    int*p1 = &a;
    int**p2 = &p1;

    cout<<endl<<endl;
    cout<<"before "<<a<<endl;
    cout<<"before "<<p1<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"after "<<a<<endl;
    cout<<"after "<<p1<<endl;
    cout<<"after "<<p2<<endl;

      cout<<endl<<endl;
    return 0;

}
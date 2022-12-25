//to calculate power(2, n)i.e, 2 to the power n
#include<iostream>
using namespace std;

int power(int n){
// base condition
if(n == 0)
return 1;

int smaller = power(n-1);
int bigger = 2*smaller;


return bigger;

/*
 relation 2:  int smaller = power(n-1);
              int bigger = 2*smaller;

              return bigger;



relation 2 :  return 2*power(n-1);

both relation 1 and relation 2 are same


*/
}




int main(){
    int n;
    cin>>n;

    int ans = power(n);
    cout<<ans<<endl;


    return 0;
}
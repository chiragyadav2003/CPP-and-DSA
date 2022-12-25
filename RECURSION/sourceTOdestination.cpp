#include<iostream>
using namespace std;

void reachHome(int src, int dest){
   
   cout<<" source "<< src << "  destination "<<dest<<endl;
    //base case
    if(src == dest){
    cout<<"reached at home"<<endl;
    return;
    }
    //processing
    src++;

    //recurcive relation
    //at a given value of source/src  we move one step ahead and call the function
    
    reachHome(src, dest);
}

int main()
{
  int src , dest;
   cin>>src>>dest;

//src = 1, dest = 10;
  reachHome(src, dest);

    return 0;
}
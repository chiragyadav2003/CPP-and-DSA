#include<iostream>
using namespace std;

void print(int n, string str[])
{
//base case
  if(n == 0)
  return ;

//processing
  int r = n%10;
  n = n/10;

//recursive relation
  print(n, str);

  cout<<str[r]<<"   ";


}

int main()
{
    int n;
    cin>>n;
   
   string arr[10] = {"zero","one","two","three","four", "five" ,"six","seven","eight","nine"};
    print(n, arr);

    return 0;
}
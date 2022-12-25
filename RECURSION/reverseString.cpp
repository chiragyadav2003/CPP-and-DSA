#include <bits\stdc++.h>
using namespace std;

//herre we pass the string by call by reference as we have to make the change in the original string
//if we pass it call by value then thee occur in copy created for that string
//so we use here call by reference
void reverse(string &str, int i, int j)
{
    cout<<"string modified as : "<<str<<endl;
    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;
    if (i > j)
        return;

    swap(str[i], str[j]);


  reverse(str, i+1, j-1);
}

int main()
{

    string str ;

   cout << "enter the string :" << endl;

   cin >> str;

    int i = 0;
    int j = str.length() - 1;

   reverse(str, i, j);
  
 
    cout<<str;


    return 0;
}
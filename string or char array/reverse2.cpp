#include <bits\stdc++.h>
using namespace std;

void print(string &str)
{
    for (int i = 0; i < str.length() ; i++)
    {
        cout << str[i];
    }
}

void reverse(string &str)
{
    int i = 0;
    int p = str.length() - 1;

    while (i <= p)
    {
        swap(str[i], str[p]);
        i++;
        p--;
    }
}

int main()
{
    string str;
    cout<<"enter the string : ";

    cin >> str;

    cout<<endl;

cout<<"string length is : ";
    cout<<str.length();
    cout<<endl;


    reverse(str);
cout<<endl;
cout<<"reverse is : ";
    print(str);

    return 0;
}
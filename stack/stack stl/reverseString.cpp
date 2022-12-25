#include <iostream>
#include <stack>

/*
as stack store data in LIFO-last in first out  order so it can be used to reverse a string
we can use stack for reversing a string
but we will use o(n) extra space
//but it can be showed that an string can be reversed using a stack

*/
using namespace std;

int main()
{

    string str = "programming";

    // creation of stack of characters for storing string characters
    stack<char> st;

    // run loop for storing string characters
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // insertion of character
        st.push(ch);
    }

    // creation of an empty string
    string ans = "";

    while (!st.empty())
    {
        char ch = st.top();

        ans.push_back(ch);

        st.pop();
    }

    cout << endl
         << "reversed string is = " << ans << endl
         << endl;

    return 0;
}
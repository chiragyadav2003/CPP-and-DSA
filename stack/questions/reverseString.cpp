#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // here we can use stack to reverse a string as it stores data in LIFO order
    // and we will be getting reverse of our input

    string s;
    cout << "input string :" << endl;
    cin >> s;

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        st.push(ch);
    }

    string ans;

    while (!st.empty())
    {
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout << "reversed input string :" << endl;
    cout << ans;

    return 0;
}

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // creation of stack
    stack<int> s;

    // checking if stack is empty or not
    if (s.empty())
    {
        cout << "stack is empty " << endl;
    }
    else
        cout << "stack is not empty " << endl;

    cout << endl
         << "after insertion :" << endl;

    // insertion
    s.push(2);
    s.push(3);

    // size
    cout << "size = " << s.size() << endl;

    // view top element
    cout << "top element = " << s.top() << endl;

    if (s.empty())
    {
        cout << "stack is empty " << endl;
    }
    else
        cout << "stack is not empty " << endl;

    cout << endl
         << "after removal :" << endl;

    // removal
    s.pop();

    cout << "top element = " << s.top() << endl;

    cout << "size = " << s.size() << endl;

    if (s.empty())
    {
        cout << "stack is empty " << endl;
    }
    else
        cout << "stack is not empty " << endl;

    return 0;
}
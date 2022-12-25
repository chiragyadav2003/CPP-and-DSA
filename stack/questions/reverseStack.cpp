#include <iostream>
#include <stack>

using namespace std;

void print(stack<int> s)
{
    cout << "top = " << s.top() << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void insertAtBottom(stack<int> &s, int n)
{
    // base case
    if (s.empty())
    {
        s.push(n);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    insertAtBottom(s, n);

    s.push(num);
}

void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int n = s.top();
    s.pop();

    reverse(s);

    insertAtBottom(s, n);
}

int main()
{
    stack<int> s;

    s.push(3);
    s.push(4);
    s.push(2);
    s.push(9);
    s.push(1);

    print(s);

    reverse(s);

    cout << "after reverse :" << endl;
    print(s);

    return 0;
}
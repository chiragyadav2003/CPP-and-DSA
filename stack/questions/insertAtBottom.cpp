#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int> &s, int n)
{

    if (s.size() == 0)
    {
        s.push(n);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    solve(s, n);

    s.push(num);
}

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

int main()
{

    stack<int> s;

    s.push(2);
    s.push(7);
    s.push(3);
    s.push(1);

    print(s);

    int n = 7;

    solve(s, n);

    cout << "after insertion at bottom :" << endl;
    print(s);

    return 0;
}
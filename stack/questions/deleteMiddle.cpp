#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int> &s, int count, int size)
{
    if (count == size / 2)
    {
        s.pop();
        return;
    }

    int n = s.top();
    s.pop();

    solve(s, count + 1, size);

    s.push(n);
}

void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{

    stack<int> s;

    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    cout << "input stack :" << endl;
    print(s);
    cout << endl;

    int count = 0;
    int size = s.size();

    solve(s, count, size);

    cout << "stack after middle element deletion :" << endl;
    print(s);

    return 0;
}
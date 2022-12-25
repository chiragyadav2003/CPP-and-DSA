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

// function which will insert element im stack in a sorted way
void sortedInsert(stack<int> &s, int n)
{
    // base case
    if (s.empty() || (s.top() < n))
    {
        s.push(n);
        return;
    }

    int num = s.top();
    s.pop();

    sortedInsert(s, n);

    s.push(num);
}

void solve(stack<int> &s)
{
    // base case
    if (s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    solve(s);

    sortedInsert(s, num);
}

int main()
{

    stack<int> s;

    s.push(3);
    s.push(4);
    s.push(1);
    s.push(9);
    s.push(6);

    print(s);

    solve(s);

    cout << "after sorting :" << endl;
    print(s);

    return 0;
}
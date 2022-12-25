#include <iostream>
#include <queue>

using namespace std;

void print(queue<int> q)
{
    cout << "queue is = ";
    if (q.empty())
    {
        cout << " empty ";
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;

    print(q);

    q.push(2);

    q.push(4);

    cout << "front = " << q.front() << endl;

    q.push(1);

    cout << "size = " << q.size() << endl;

    print(q);

    q.pop();

    print(q);

    return 0;
}
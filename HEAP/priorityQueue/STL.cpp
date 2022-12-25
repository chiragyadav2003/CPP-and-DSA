#include <iostream>
#include <queue>

using namespace std;

// print max heap
void print(priority_queue<int> q)
{

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

// print max heap
void printMin(priority_queue<int, vector<int>, greater<int>> q)
{

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    cout << "max heap is as follows :" << endl;

    // creation of maxheap
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(7);
    pq.push(1);
    pq.push(2);

    print(pq);

    cout << "top = " << pq.top() << endl;
    cout << "size = " << pq.size() << endl;
    pq.pop();

    cout << "after deletion:" << endl;
    print(pq);
    cout << "top = " << pq.top() << endl;
    cout << "size = " << pq.size() << endl;

    cout << endl;
    cout << "********" << endl;
    cout << endl;

    cout << "min heap is as follows :" << endl;
    // creation of min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(4);
    minHeap.push(9);
    minHeap.push(1);
    minHeap.push(3);
    minHeap.push(7);

    printMin(minHeap);

    cout << "top = " << minHeap.top() << endl;
    cout << "size = " << minHeap.size() << endl;
    minHeap.pop();

    cout << "after deletion:" << endl;
    printMin(minHeap);
    cout << "top = " << minHeap.top() << endl;
    cout << "size = " << minHeap.size() << endl;

    return 0;
}
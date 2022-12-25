#include <iostream>

using namespace std;

class Queue
{
    // data members
    int *arr;
    int size;
    int front;
    int rear;

public:
    // constructor
    Queue(int n)
    {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // insert
    void push(int n)
    {
        // check for overflow
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            cout << "queue is full" << endl;
        }

        // for inserting first element
        else if (front == -1)
        {
            front = 0;
            rear = 0;
        }

        // to maintain cyclic nature
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }

        // normal flow
        else
        {
            rear++;
        }

        arr[rear] = n;
    }

    // pop and return popped element
    int pop()
    {
        // check for underflow
        if (front == -1)
        {
            cout << "queue is empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        // when single element is present
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }

        // to maintain cyclic nature
        else if (front == size - 1)
        {
            front = 0;
        }

        // normal case
        else
        {
            front++;
        }

        return ans;
    }

    // check empty or not
    bool isEmpty()
    {
        if (front == -1)
            return 1;
        else
            return 0;
    }

    // check full or not
    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            return 1;
        }
        else
            return 0;
    }

    // print queue
    void print()
    {
        if (isEmpty())
        {
            return;
        }

        int ans = arr[front];
        cout << arr[front] << " ";
        pop();

        print();

        push(ans);
    }
};

int main()
{
    Queue q(4);

    q.push(4);
    q.push(99);
    q.push(11);

    cout << "queue is =";
    q.print();
    cout << endl;

    q.pop();

    cout << "queue is =";
    q.print();
    cout << endl;

    q.push(55);

    q.push(898);

    cout << "queue is =";
    q.print();
    cout << endl;

    q.push(890);

    return 0;
}
#include <iostream>

using namespace std;

class Queue
{
public:
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

    // insert element in rear of queue
    void pushBack(int n)
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

    // insert element in front
    void pushFront(int n)
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
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }

        // normal flow
        else
        {
            front--;
        }

        arr[front] = n;
    }

    // pop element fron front and return popped element
    int popFront()
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

    // pop element from rear and return popped element
    int popBack()
    {
        // check for underflow
        if (front == -1)
        {
            cout << "queue is empty" << endl;
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        // when single element is present
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }

        // to maintain cyclic nature
        else if (rear == 0)
        {
            rear = size - 1;
        }

        // normal case
        else
        {
            rear--;
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
        popFront();

        print();
        pushFront(ans);
    }
};

int main()
{
    Queue q(5);

    q.pushFront(4);

    q.pushBack(3);

    q.pushFront(9);

    cout << "queue is = ";
    q.print();
    cout << endl;

    q.pushFront(6);

    cout << "popped element is = " << q.popBack() << endl;

    cout << "queue is = ";
    q.print();
    cout << endl;

    q.pushBack(33);

    q.pushBack(89);

    cout << "queue is = ";
    q.print();
    cout << endl;

    q.pushBack(99);

    return 0;
}
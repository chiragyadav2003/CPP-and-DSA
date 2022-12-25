#include <iostream>
using namespace std;

class queue
{
    // date members
private:
    int *arr;
    int size;
    int front;
    int rear;

public:
    // constructor
    queue(int s)
    {
        size = s;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int n)
    {
        // check for empty space
        if (rear == size)
        {
            cout << "queue overflow" << endl;
            return;
        }

        cout << "rear index = " << rear << endl;
        cout << "front index = " << front << endl;

        arr[rear] = n;
        rear++;
    }

    void pop()
    {
        // check for underflow
        if (front == rear)
        {
            cout << "queue underflow" << endl;
        }

        arr[front] = -1;
        front++;
    }

    bool isEmpty()
    {
        if (rear == front)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }

    int qfront()
    {
        if (front == rear)
        {
            cout << "queue is empty" << endl;
        }

        return arr[front];
    }

    // void print()
    // {
    //     if (isEmpty())
    //     {
    //         return;
    //     }

    //     int ans = arr[front];
    //     cout << arr[front] << " ";
    //     pop();

    //     print();

    //     push(ans);
    // }
};

int main()
{
    queue q(4);

    q.push(3);

    q.push(1);

    q.push(33);

    // cout << "queue is  =";
    // q.print();
    // cout << endl;

    q.pop();

    // cout << "queue is  =";
    // q.print();
    // cout << endl;

    q.push(12);

    // cout << "queue is  =";
    // q.print();
    // cout << endl;

    q.push(39);

    // cout << "queue is  =";
    // q.print();
    // cout << endl;

    q.push(39);

    // cout << "queue is  =";
    // q.print();
    // cout << endl;

    return 0;
}
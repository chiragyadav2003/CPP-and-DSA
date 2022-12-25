#include <iostream>
using namespace std;

class kQueue
{
private:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freespot;
    int *next;

public:
    // constructor
    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;

        arr = new int[n];

        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;

        front = new int[k];
        rear = new int[k];

        for (int i = 0; i < n; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        freespot = 0;
    }

    void enque(int n, int qn)
    {
        // check for overflow
        if (freespot == -1)
        {
            cout << "overflow" << endl;
            return;
        }

        // find index
        int index = freespot;

        // update freespot
        freespot = next[index];

        // check if 1 element is inserted
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }

        else
        {
            // else link new element to previous element
            next[rear[qn - 1]] = index;
        }

        // update next as there in no free slot available for that index
        next[index] = -1;

        // update index in rear
        rear[qn - 1] = index;

        // insert element in array
        arr[index] = n;
    }

    int deque(int qn)
    {
        // check for underflow
        if (front[qn - 1] == -1)
        {
            cout << "queue underflow" << endl;
            return -1;
        }

        // find index for pop
        int index = front[qn - 1];

        // update front
        front[qn - 1] = next[index];

        // when only single element is present in queue
        // if (front[qn - 1] == rear[qn - 1])
        // {
        //     rear[qn - 1] = -1;
        // }

        // now make that index now point to current freespot
        next[index] = freespot;

        // update current freespot
        freespot = index;

        return arr[index];
    }

    void print()
    {
        cout << "array is = ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void printr()
    {
        cout << "rear index array is = ";
        for (int i = 0; i < k; i++)
        {
            cout << rear[i] << " ";
        }
    }

    void printf()
    {
        cout << "front index array is = ";
        for (int i = 0; i < k; i++)
        {
            cout << front[i] << " ";
        }
    }

    void printn()
    {
        cout << "next array is =";
        for (int i = 0; i < n; i++)
        {
            cout << next[i] << " ";
        }
    }
};

int main()
{
    kQueue q(10, 3);

    q.enque(10, 1);
    q.enque(14, 2);
    q.enque(12, 1);
    q.enque(11, 1);

    q.print();
    cout << endl;

    q.printr();
    cout << endl;

    q.printf();
    cout << endl;

    q.printn();
    cout << endl
         << endl;

    cout << endl
         << endl
         << "after pop" << endl;

    cout << q.deque(1) << endl;
    q.print();
    cout << endl;

    q.printr();
    cout << endl;

    q.printf();
    cout << endl;

    q.printn();
    cout << endl;

    cout << endl
         << endl
         << "after pop" << endl;

    cout << q.deque(2) << endl;
    q.print();
    cout << endl;

    q.printr();
    cout << endl;

    q.printf();
    cout << endl;

    q.printn();
    cout << endl;

    cout << endl
         << endl
         << "after pop" << endl;

    cout << q.deque(1) << endl;
    q.print();
    cout << endl;

    q.printr();
    cout << endl;

    q.printf();
    cout << endl;

    q.printn();
    cout << endl;

    cout << endl
         << endl
         << "after pop" << endl;

    cout << q.deque(1) << endl;
    q.print();
    cout << endl;

    q.printr();
    cout << endl;

    q.printf();
    cout << endl;

    q.printn();
    cout << endl;

    cout << endl
         << endl
         << "after pop" << endl;

    cout << q.deque(2) << endl;
    q.print();
    cout << endl;

    q.printr();
    cout << endl;

    q.printf();
    cout << endl;

    q.printn();
    cout << endl;

    return 0;
}
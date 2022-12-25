#include <bits/stdc++.h>

using namespace std;

class Stack
{
    // properties
    // here we will be doing insertion from both ends of the stack
    // so here will be two top elements for insertion from both ends
    // top1 will do insertion from left side and top2 will do insertion from right side
    // top1 will be innitialized with -1
    // and top2 will be initialized with size of the array
    // like in array for an array of size n it's index ranfe is from 0 to (n-1)
    // so initialize left side i.e, top1 with "-1"
    // and initialize right side or top2 with "s" i.e, size
    int *arr;
    int top1;
    int top2;
    int size;

    // constructor
    Stack(int s)
    {
        this->size = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
    }
    // Push in stack 1.
    // here (top2 - top1 > 1) tells that if the space is present in array or not
    // ex- size = 1 then top1 = -1 and top2 = 1 so, top2-top1 = 2 i.e, 2>1 so insertion is possible
    // ex- size = 0 then top1 = -1 and top2 = 0 so, top2-top1 = 1 i.e, 1!>1 so insertion is not possible
    void push1(int n)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = n;
        }

        else
        {
            cout << "stack overflow";
        }
    }

    void push2(int n)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = n;
        }

        else
        {
            cout << "stack overflow";
        }
    }

    void pop1()
    {
        if (top1 > -1)
        {
            top1--;
        }

        else
        {
            cout << "stack underflow";
        }
    }

    // reverse process here as insertion and deletion is occuring from other side
    // top2++ as we are moving right

    void pop2()
    {
        if (top2 < size)
        {
            top2++;
        }

        else
        {
            cout << "stack underflow";
        }
    }
};

int main()
{

    return 0;
}
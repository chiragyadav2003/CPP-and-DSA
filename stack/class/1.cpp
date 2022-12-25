#include <iostream>
#include <stack>

using namespace std;

class Stack
{

private:
    // properties
    int top;
    int size;
    int *arr;

public:
    // behaviour
    // constructor for creating stack of a given size
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1; // top is the the index at where we want to insert
    }

    // functions
    // for insertion
    // function is of void type
    void push(int element)
    { // here  size-top>1  it is the condition which will tells us if space is available in stack or not
        // as our top is initialized by -1
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }

        else
        {
            cout << "stack overflow" << endl;
        }
    }

    // for removal
    // function is of void type
    void pop()
    {
        // check if element is present in stack or not
        if (top >= 0)
        {
            top--;
        }

        else
        {
            cout << "stack underflow" << endl;
        }
    }

    // return top element
    // function is of int type

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }

        else
        {
            cout << "stack is empty " << endl;
            return -1;
        }
    }

    // check empty or not
    // function is of bool type

    bool isEmpty()
    {
        // if our top is at -1 then stack is empty else it is not empty
        if (top == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    void print()
    {
        if (top == -1)
        {
            cout << "stack is empty " << endl;
        }

        else
        {
            int i = 0;
            while (i <= top)
            {
                cout << arr[i] << " ";
                i++;
            }
        }
    }
};

int main()
{

    Stack s(5);

    cout << "stack printing = ";
    s.print();
    cout << endl;

    if (s.isEmpty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    cout << endl
         << "after insertion :" << endl;
    s.push(3);
    s.push(2);

    cout << "top element = " << s.peek() << endl;
    if (s.isEmpty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    cout << "stack printing = ";
    s.print();
    cout << endl;

    cout << endl
         << "after deletion :";
    s.pop();
    cout << "top element = " << s.peek() << endl;
    ;
    if (s.isEmpty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    cout << "stack printing = ";
    s.print();
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

class stack
{
private:
    int data;
    Node *next;
    int size;

public:
    stack()
    {
        this->data = -1;
        this->next = NULL;
        this->size = 0;
    }

    Node *head = NULL;

    void push()
    {
        cout << "enter element to push in stack :" << endl;

        int n;
        cin >> n;

        if (size < 0)
        {
            size = 0;
        }

        size = size + 1;

        // insertion is stack is like insertion in list at head
        // create node using constructor
        Node *temp = new Node(n);

        temp->next = head;

        head = temp;
    }

    int pop()
    {
        if (head == NULL)
        {
            cout << "underflow" << endl;
            return -1;
        }

        cout << "After pop :";

        int top = head->data;

        head = head->next;

        size--;

        return top;
    }

    int peek()
    {
        if (head == NULL)
        {
            cout << "underflow" << endl;
            return -1;
        }

        return head->data;
    }

    bool isEmpty()
    {
        if (head == NULL)
        {
            return 1;
        }

        return 0;
    }

    void print()
    {
        cout << "stack is : ";
        Node *curr = head;

        while (curr != NULL)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    void sizeOfStack()
    {
        cout << "size = " << size << endl;
    }
};

int main()
{

    stack s;

    s.pop();
    s.sizeOfStack();

    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.print();
    s.sizeOfStack();

    s.pop();
    s.sizeOfStack();
    s.print();

    return 0;
}

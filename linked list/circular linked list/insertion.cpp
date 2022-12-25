#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data)
    {

        this->data = data;
        this->next = NULL;
    }
};

void insert(node *&tail, int element, int data)
{
    // empty linked list
    if (tail == NULL)
    {
        node *temp = new node(data);
        tail = temp;
        temp->next = temp;
    }

    // single node is present
    else if (tail->next == tail)
    {
        node *temp = new node(data);
        temp->next = tail;
        tail->next = temp;
    }

    // we have 2 or more than 2 node
    else
    {
        node *temp = new node(data);
        node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        } // we have reached at required node after which insertion is to be done

        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(node *tail)
{
    cout << endl;
    // if list is empty
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }

    // if we have single linked list
    // else if (tail->next == tail)
    // {
    //     cout << tail->data << endl;
    //     return;
    // }

    // if we had 2 or more than 2 linked list
    else
    {
        node *temp = tail;

        // we reached at tail again after rotation
        // here we have used do while loop to print linked list
        // best way to print circular liked list
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != tail);

        cout
            << endl;
    }
    cout << endl;
}

int main()
{
    node *tail = NULL;
    print(tail);

    // void insert(node *&tail, int element, int data)

    insert(tail, 2, 3);
    print(tail);

    insert(tail, 3, 5);
    print(tail);

    insert(tail, 5, 7);
    print(tail);

    insert(tail, 7, 9);
    print(tail);

    insert(tail, 5, 1);
    print(tail);

    insert(tail, 7, 11);
    print(tail);

    return 0;
}
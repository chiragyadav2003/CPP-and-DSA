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
    // if list is empty
    if (tail == NULL)
    {
        cout << "list is empty" << endl
             << endl;
        return;
    }

    else
    {

        node *temp = tail;

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

// here we can not keep function name simply as delete as it is destructor keyword
void deletion(node *&tail, int value)
{
    cout << "list after deletion :";

    // for empty list
    if (tail == NULL)
    {
        cout << "list is empty check again" << endl
             << endl;
    }

    else
    { // here we have taken 2 pointer prev which is kept at tail and other ic curr which is kept at next of prev
        node *prev = tail;
        node *curr = prev->next;

        // loop runs until we found value in list
        // curr will indicate that node
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // for single node both prev and curr will be at same position
        // now after deletion tail should point null
        if (prev == curr)
        {
            tail = NULL; // updation of tail is required
        }

        // >=2 node is present
        // one more method to run loop : else if (curr == tail)
        // updation of tail is required
        else
        {
            tail = prev; // updation of tail is required
        }

        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    node *tail = NULL;
    print(tail);

    // deletion when list is empty
    deletion(tail, 4);
    print(tail);

    insert(tail, 2, 3);
    print(tail);

    // deletion when single node is present
    deletion(tail, 3);
    print(tail);

    insert(tail, 3, 5);
    print(tail);

    insert(tail, 5, 7);
    print(tail);

    insert(tail, 7, 9);
    print(tail);

    insert(tail, 5, 1);
    print(tail);

    deletion(tail, 5);
    print(tail);

    insert(tail, 7, 11);
    print(tail);

    deletion(tail, 11);
    print(tail);

    return 0;
}
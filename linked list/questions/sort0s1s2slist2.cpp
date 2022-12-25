// sorting by changing or altering links between nodes
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

// insertion at head
node *insert()
{
    int x;
    cin >> x;
    node *head = NULL;

    while (x != -1)
    {

        if (head == NULL)
        {
            node *temp = new node(x);
            head = temp;
        }

        else
        {
            node *curr = new node(x);
            curr->next = head;
            head = curr;
        }
        cin >> x;
    }
    return head;
}

void print(node *head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertTail(node *&tail, node *curr)
{

    tail->next = curr;
    tail = curr;
}

void sort(node *&head)
{

    // creation of separate nodes
    // here we had initialize them with a dummy node
    // to make it easy otherwise it will be very hard to solve
    node *zeroHead = new node(-1);
    node *zeroTail = zeroHead;

    node *oneHead = new node(-1);
    node *oneTail = oneHead;

    node *twoHead = new node(-1);
    node *twoTail = twoHead;

    node *temp = head;

    // adding 0, 1 and 2 in their separate lists
    while (temp != NULL)
    {
        int val = temp->data;

        if (val == 0)
        {
            insertTail(zeroTail, temp);
        }

        else if (val == 1)
        {
            insertTail(oneTail, temp);
        }

        if (val == 2)
        {
            insertTail(twoTail, temp);
        }

        temp = temp->next;
    }

    // now we will merge the lists
    // only edge case is that if (zeroHead == zeroTail) then we have to directly reach at second node i.e, zeroHead

    // empty list of zero
    if (zeroHead == zeroTail)
    {
        zeroTail->next = twoHead->next;
    }

    // ist is not empty
    else
    {
        zeroTail->next = oneHead->next;
        oneTail->next = twoHead->next;
    }

    twoTail->next = NULL;

    // updation of head
    head = zeroHead->next;

    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
}

int main()
{

    node *head = insert();
    print(head);

    sort(head);
    print(head);

    return 0;
}
// this algo will tell us whether a cycle or a loop is present in a linked list or not
#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor called
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// here we have created a function which will insert new node at the tail

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp; // updation of tail node pointer
    tail = temp;       // here tail shift from node1 to temp
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// this algo will tell us if loop is present or not
// it is not necessary that it will return us the starting node of loop
bool floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    Node *fast = head;
    Node *slow = head;

    while (head != NULL && head->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            cout << "intersection node is = " << slow->data << endl;
            return 1;
        }
    }

    return 0;
}

// here now this function will return us that node at which slow and fast intersect in cycle
Node *intersectionNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *fast = head;
    Node *slow = head;

    while (head != NULL && head->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            // cout << "intersection node is = " << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}

int main()
{
    // node creation
    Node *node1 = new Node(10);

    Node *head = node1;

    Node *tail = node1;

    // if (checkCycle(head))
    // {
    //     cout << "cycle is present" << endl;
    // }
    // else
    //     cout << "cycle is not present" << endl;

    // print(head);

    insertAtTail(tail, 20);

    // print(head);

    insertAtTail(tail, 30);

    // our node is 10  ->  20  ->  30
    // 30 is pointing back 20

    // print(head);
    // cout << head->data << " " << tail->data;

    tail->next = head->next; // cycle is created
    // print(head);

    if (floydDetectLoop(head))
    {
        cout << "cycle is present" << endl;
    }
    else
        cout << "cycle is not present" << endl;

    Node *intersection = intersectionNode(head);
    cout << "intersection of slow and fast is present at node of data = " << intersection->data << endl;

    return 0;
}
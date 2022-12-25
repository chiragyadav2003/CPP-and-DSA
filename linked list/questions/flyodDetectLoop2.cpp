// this algo will tell us whether a cycle or a loop is present in a linked list or not
// now we will make function so that we can get the beginning node of loop
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

// here now this function will return us that node at which slow and fast intersect in cycle
// as function data type is node so its return type will also be a node
Node *floydDetectLoop(Node *head)
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
            return slow;
        }
    }

    return NULL;
}

// as function data type is node so its return type will also be a node
// this function will return us starting node of loop in the linked list
Node *returnStartNode(Node *head)
{
    if (head == NULL)
        return NULL;

    // //this node will start from inteersection of fast and slow in flyod detection algo
    // and pointing their intersection
    Node *intersection = floydDetectLoop(head);
    Node *slow = head; // put slow at head of list

    while (slow != intersection) // both node are moving at same speed
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    // as both slow and intersection are now equal
    // so we will return it
    return slow;
}

int main()
{
    // node creation
    Node *node1 = new Node(10);

    Node *head = node1;

    Node *tail = node1;

    insertAtTail(tail, 20);

    // print(head);

    insertAtTail(tail, 30);

    // our node is 10  ->  20  ->  30
    // 30 is pointing back 20

    tail->next = head->next; // cycle is created

    Node *intersection = floydDetectLoop(head);
    cout << "intersection of slow and fast is present at node of data = " << intersection->data << endl
         << endl;

    Node *start = returnStartNode(head);
    cout << "starting node of loop in linked list = " << start->data << endl
         << endl;

    return 0;
}
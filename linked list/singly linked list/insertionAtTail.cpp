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

// printing of link list
// here we are traversing in linked list
void print(Node *&head)
{
    // creation of a temporary node and copy head node values  in it
    Node *temp = head;
    // run the loop while it is not equal to null
    while (temp != NULL)
    {
        cout << temp->data << " "; // printing of current data of node using  temp->data
        temp = temp->next;         // updation on next node
    }
    cout << endl;
}

int main()
{
    // node creation
    Node *node1 = new Node(10);

    // creation of head node and here it is same as node1
    Node *head = node1; // copy of node1 in head mnode

    // creation of tail node and copying node1 in it
    Node *tail = node1;

    print(head);

    insertAtTail(tail, 20);

    print(head);

    insertAtTail(tail, 30);

    print(head);

    return 0;
}
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

// here we have created a function which will insert new node at the head
void insertAtHead(Node *&head, int data)
{
    // creation of new node
    Node *temp = new Node(data);
    temp->next = head; // updation of next for newly created node temp
    head = temp;       // updation of head as it will now be at temp
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
    Node *node1 = new Node(20);

    // creation of head node and here it is same as node1
    Node *head = node1; // copy of node1 in head mnode

    print(head);

    insertAtHead(head, 30);

    print(head);

    insertAtHead(head, 40);

    print(head);

    return 0;
}
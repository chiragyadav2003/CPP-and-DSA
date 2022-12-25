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

bool checkCycle(Node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    Node *temp = head;

    // creation of map to detect cycle
    map<Node *, bool> visited;
    while (temp != NULL)
    {
        // this condition will check if we had visited that place or not
        if (visited[temp] == true)
        { // it will tell us cycle is present at which node
            cout << "cycle is present at node = " << temp->data << endl;
            return 1;
        }
        visited[temp] = true; // we will mark the node as true which we have visited
        temp = temp->next;    // updation of temp
    }

    return 0;
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

    // print(head);
    // cout << head->data << " " << tail->data;

    tail->next = head->next; // cycle is created
    // print(head);

    if (checkCycle(head))
    {
        cout << "cycle is present" << endl;
    }
    else
        cout << "cycle is not present" << endl;

    return 0;
}
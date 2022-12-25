#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

//here we will both head and tailas reference 
//otherwise a copy of their will be created and all the change will occur in that copy
// and we do not get the desired result
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // if position = 1 i.e, insertion at head
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    // we write here cnt < position-1 as we have to taverse at (n-1)'th node
    // for ex for insertion at 3'rd position we have to trverse upto 2'nd node
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // for insertion at tail or at the end of L.L.
    // if temp = null then we can use uns insert at tail
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // creation on new node to be inserted
    Node *nodeToInsert = new Node(data);
    // first we have to define next for nodeToInsert as we will update the temp next
    nodeToInsert->next = temp->next;
    // now we update next for temp as it now point nodeToInsert
    temp->next = nodeToInsert;
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

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;

    Node *tail = node1;

    print(head);

    cout << "head = " << head->data << endl;

    cout << "tail = " << tail->data << endl;
    cout << endl
         << endl;

    insertAtHead(head, 20);
    print(head);

    cout << "head = " << head->data << endl;

    cout << "tail = " << tail->data << endl;
    cout << endl
         << endl;

    insertAtHead(head, 30);
    print(head);

    cout << "head = " << head->data << endl;

    cout << "tail = " << tail->data << endl;
    cout << endl
         << endl;

    insertAtTail(tail, 50);
    print(head);

    cout << "head = " << head->data << endl;

    cout << "tail = " << tail->data << endl;
    cout << endl
         << endl;

    // insertion in middle
    insertAtPosition(head, tail, 4, 35);
    cout << "for insertion at a position :" << endl;
    print(head);

    cout << "head = " << head->data << endl;

    cout << "tail = " << tail->data << endl;
    cout << endl
         << endl;

    // insertion at head
    cout << "for insertion at head  : " << endl;
    insertAtPosition(head, tail, 1, 85);
    print(head);

    cout << "head = " << head->data << endl;

    cout << "tail = " << tail->data << endl;
    cout << endl
         << endl;

    // insertion at tail
    cout << "for insertion at tail :" << endl;
    insertAtPosition(head, tail, 7, 90); // position = 7 as till now L.L. is of length 6

    print(head);

    cout << "head = " << head->data << endl;

    cout << "tail = " << tail->data << endl;

      // insertion at tail
    cout << "for insertion at tail :" << endl;
    insertAtPosition(head, tail, 8, 99); // position = 8 as till now L.L. is of length 7

    print(head);

    cout << "head = " << head->data << endl;

    cout << "tail = " << tail->data << endl;

    return 0;
}
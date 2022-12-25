#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *prev;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertHead(node *&head, node* &tail, int data)
{

    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }

    else
    {
        node *temp = new node(data);

        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertTail(node *&head, node *&tail, int data)
{

    if(tail == NULL){
 node *temp = new node(data);
        head = temp;
        tail = temp;

    }

    else{
   node *temp = new node(data);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;

    }
 
}

void insertAtPosition(node *&head, node *&tail, int position, int data)
{
    // to insert at head
    if (position == 1)
    {
        insertHead(head, tail, data);
    }

    // to insert at mid or at tail
    else
    {
        node *temp = head;

        node *nodeToInsert = new node(data);
        int cnt = 1;

        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }

        if (temp->next == NULL) // checking if we are at last node
        {
            insertTail(head, tail, data);
            return;
        }

        else
        {

            nodeToInsert->next = temp->next;
            temp->next->prev = nodeToInsert;
            temp->next = nodeToInsert;
            nodeToInsert->prev = temp;
        }
    }
}

int main()
{

    // in case ofnempty node
    node *head = NULL;
    node *tail = NULL;
   // print(head);
   //here we can not use [head-> data] as head is null so it will give error same with tail
   // cout << "head = " << head->data << endl;
   // cout << "tail = " << tail->data << endl;

    insertHead(head, tail, 12);
    print(head);
    cout << "head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;

    insertHead(head, tail, 16);
    print(head);
    cout << "head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;

    insertHead(head, tail, 22);
    print(head);
    cout << "head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;

    insertTail(head, tail, 3);
    print(head);
    cout << "head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;

    // insertion at head
    insertAtPosition(head, tail, 1, 1);
    print(head);
    cout << "head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;

    // insertion in mid
    insertAtPosition(head, tail, 3, 54);
    print(head);
    cout << "head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;

    // insertion at tail or end
    insertAtPosition(head, tail, 7, 65);
    print(head);
    cout << "head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;

    return 0;
}
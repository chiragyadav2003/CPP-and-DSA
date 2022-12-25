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

void insertHead(node *&head, int data)
{
    node *temp = new node(data);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

int main()
{

    node *node1 = new node(10);
    node *head = node1;
    print(head);

    insertHead(head, 12);
    print(head);

    insertHead(head, 16);
    print(head);

    insertHead(head, 22);
    print(head);

    return 0;
}
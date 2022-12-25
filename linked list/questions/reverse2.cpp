// recursive approach to reverse a list
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

void insertHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void print(node *head)
{
    if (head == NULL)
    {
        cout << "empty list";
        return;
    }

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next; // updation of temp is required
    }
    cout << endl;
}

void reverse(node *&head, node *curr, node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

int main()
{
    node *node1 = new node(2);
    node *head = node1;
    print(head);

    insertHead(head, 3);
    print(head);

    insertHead(head, 6);
    print(head);

    insertHead(head, 5);
    print(head);

    insertHead(head, 11);
    print(head);

    insertHead(head, 9);
    print(head);

    cout << "reversed list is : ";
    node *curr = head;
    node *prev = NULL;

    reverse(head, curr, prev);
    print(head);

    return 0;
}
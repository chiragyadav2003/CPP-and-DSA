// iterative approach to reverse a list
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

void reverse(node *&head)
{
    node *curr = head;
    node *prev = NULL;
    node *forward = NULL;
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    else
    {
        while (curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        head = prev;
    }
}

int main()
{
    node *node1 = new node(2);
    node *head = node1;
    print(head);

    cout << "reverse list is : ";
    reverse(head);
    print(head);

    insertHead(head, 3);
    print(head);

    cout << "reverse list is : ";
    reverse(head);
    print(head);

    insertHead(head, 6);
    print(head);

    cout << "reverse list is : ";
    reverse(head);
    print(head);

    insertHead(head, 5);
    print(head);

    cout << "reverse list is : ";
    reverse(head);
    print(head);

    insertHead(head, 11);
    print(head);

    cout << "reverse list is : ";
    reverse(head);
    print(head);

    insertHead(head, 9);
    print(head);

    cout << "reverse list is : ";
    reverse(head);
    print(head);

    return 0;
}
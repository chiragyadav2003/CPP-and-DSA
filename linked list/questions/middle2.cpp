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

void mid(node *head)
{
    cout << "mid = ";
    if (head == NULL || head->next == NULL)
    {
        cout << head->data;
    }

    else
    {
        node *slow = head;
        node *fast = head->next;
        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
        }
        cout << slow->data;
    }
    cout << endl;
}

int main()
{
    node *node1 = new node(2);
    node *head = node1;
    print(head);
    mid(head);

    insertHead(head, 3);
    print(head);
    mid(head);

    insertHead(head, 6);
    print(head);
    mid(head);

    insertHead(head, 5);
    print(head);
    mid(head);

    insertHead(head, 11);
    print(head);
    mid(head);

    insertHead(head, 9);
    print(head);
    mid(head);

    return 0;
}
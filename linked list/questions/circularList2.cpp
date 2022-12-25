// when list is singly
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

void print(node *head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// insertion at tail
node *insert()
{
    int x;
    cin >> x;
    node *head = NULL;
    node *tail = NULL;
    while (x != -1)
    {
        if (head == NULL)
        {
            node *a = new node(x);
            head = a;
            tail = a;
        }
        else
        {
            node *temp = new node(x);
            tail->next = temp;
            tail = temp;
        }
        cin >> x;
    }
    return head;
}

bool check(node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (head == temp)
    {
        return 1;
    }

    return 0;
}

int main()
{
    node *head = insert();
    print(head);

    if (check(head))
    {
        cout << "list is circular" << endl;
    }
    else
        cout << "list is not circular" << endl;

    return 0;
}
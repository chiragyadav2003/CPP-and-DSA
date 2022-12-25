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

int getLength(node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

void midNode(node *head)
{
    cout << "mid = ";
    // null node or single node
    if (head == NULL || head->next == NULL)
    {
        cout << head->data;
    }

    // for 2 node in list
    else if (head->next->next == NULL)
    {
        node *temp = head->next;
        cout << temp->data;
    }

    else
    {
        node *temp = head;
        int mid = getLength(head);
        int ans = (mid) / 2;
        while (ans)
        {
            temp = temp->next;
            ans--;
        }
        cout << temp->data;
    }
    cout << endl;
}

int main()
{
    node *node1 = new node(2);
    node *head = node1;
    print(head);
    midNode(head);

    insertHead(head, 3);
    print(head);
    midNode(head);

    insertHead(head, 6);
    print(head);
    midNode(head);

    insertHead(head, 5);
    print(head);
    midNode(head);

    insertHead(head, 11);
    print(head);
    midNode(head);

    insertHead(head, 9);
    print(head);
    midNode(head);

    return 0;
}
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

node *insert()
{
    int x;
    cin >> x;
    node *head = NULL;

    while (x != -1)
    {

        if (head == NULL)
        {
            node *temp = new node(x);
            head = temp;
        }

        else
        {
            node *curr = new node(x);
            curr->next = head;
            head = curr;
        }
        cin >> x;
    }
    return head;
}

void print(node *head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *sort(node *&head)
{
    node *temp = head;
    int x;
    while (temp->next != NULL)
    {
        if (temp->data > temp->next->data)
        {
            // x = temp->data;
            swap(temp->data, temp->next->data);
            // temp->next->data = x;
            temp = temp->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return temp;
}

int main()
{

    node *head = insert();
    print(head);

    node *pr = sort(head);
    print(head);

    return 0;
}
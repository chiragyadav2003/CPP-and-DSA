// remove duplicate from sorted list
// here we have to make input in such a way
// that our list should be sorted either ascending or descending
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

// insertion at tail
// here data type of function is node so we have to make the return type also node
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
    // loop is created
    //  tail->next = head->next;

    return head;
}

node *removeDuplicate(node *head)
{
    if (head == NULL)
    {
        cout << "list is empty";
        return NULL;
    }

    node *curr = head;

    while (curr != NULL)
    {
        // when consecutive nodes have same data
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            node *forward = curr->next->next;
            node *nodeToDelete = curr->next;
            delete (nodeToDelete);
            curr->next = forward;
        }

        // when consecutive nodes ard different
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

void print(node *head)
{
    if (head == NULL)
    {
        cout << "list is empty";
    }

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = insert();
    cout << head->data << " ";
    print(head);

    node *newNode = removeDuplicate(head);
    cout << "new list after removal of duplicates from sorted list is as follows :" << endl;
    print(newNode);

    return 0;
}
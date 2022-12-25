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
    node *head = NULL;
    int x;
    cin >> x;
    while (x != -1)
    {
        node *a = new node(x);
        if (head == NULL)
        {
            head = a;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = a;
        }
        cin >> x;
    }
    return head;
}

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

node *reverseK(node *&head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    // step 1 : reverse first k nodes
    node *curr = head;
    node *prev = NULL;
    node *forw = NULL;
    int cnt = 0;

    while (curr != NULL && cnt < k)
    {
        // in this process the head is at 2 position and prev at 1 position
        // in last we will update it
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
        cnt++;
    }

    // step 2: recursive call

    if (forw != NULL)
    {
        head->next = reverseK(forw, k);
    }

    // step 3: return head of reversed list
    // updation of head
    head = prev;
    return head;
}

int main()
{
    node *head = insert();
    print(head);

    cout << "enter value of k" << endl;
    int k;
    cin >> k;

    reverseK(head, k);
    print(head);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void deleteHead(Node *&head)
{
    Node *temp = head->next;
    delete head;
    head = temp;
    cout << "deletion from head :" << endl;
}


void deleteTail(Node *&head)
{
    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        return;
    }

    Node *prev = head;
    while (prev->next->next != NULL)
    {
        prev = prev->next;
    }

    delete prev->next;
    prev->next = NULL;
    cout<<"deletion from end :"<<endl;
}

void deleteMid(Node *&head, int position)
{

    Node *prev = NULL;
    Node *curr = head;

    int cnt = 1;

    while (cnt < position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    cout<<"deletion from mid :"<<endl;
}

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    // Node *tail = node1;

    print(head);

    // insertion at head
    insertAtHead(head, 20);
    print(head);

    insertAtHead(head, 30);
    print(head);

    insertAtHead(head, 40);
    print(head);

    insertAtHead(head, 50);
    print(head);

    deleteHead(head);
    print(head);

    deleteTail(head);
    print(head);

    deleteMid(head, 2);
    print(head);

    return 0;
}
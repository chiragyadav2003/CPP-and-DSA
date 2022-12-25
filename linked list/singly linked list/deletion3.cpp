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

void deleteNode(Node *&head, int position)
{
    if (head == NULL)
        return;

    // deletion from start
    if (position == 1)
    {
        cout << "deletion from head :" << endl;
        Node *temp = head->next;
        delete head;
        head = temp;
    }

    // deletion from mid or end
    else
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
    }
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
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    print(head);

    // insertion at head
    cout << "new L.L. :" << endl;
    insertAtHead(head, 20);
    print(head);

    cout << "new L.L. :" << endl;
    insertAtHead(head, 30);
    print(head);

    cout << "new L.L. :" << endl;
    insertAtHead(head, 40);
    print(head);

    cout << "new L.L. :" << endl;
    insertAtHead(head, 50);
    print(head);

    deleteNode(head, 1);
    print(head);

    cout << "new L.L. :" << endl;
    insertAtHead(head, 60);
    print(head);

    cout << "deletion from end :" << endl;
    deleteNode(head, 5);
    print(head);

    cout << "new L.L. :" << endl;
    insertAtHead(head, 70);
    print(head);

    cout << "deletion from mid :" << endl;
    deleteNode(head, 3);
    print(head);

    return 0;
}
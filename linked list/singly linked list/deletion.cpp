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

    // destructor to delete node
    ~Node()
    {
        int value = this->data;

        while (this->next != NULL)
        {
            delete next;       // delete node pointing address
            this->next = NULL; // updation of pointer as it will now point null after deletion
        }
        cout << "memory is freed for node with data = " << value << endl;
    }
};

void deleteNode(int position, Node *&head)
{

    // deletion at head
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    }

    // to delete node of mid or to delete node at last
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
        curr->next = NULL; // now it will point to null
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
    Node* tail = node1;

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

//deletion from end
    deleteNode(5, head);
    print(head);

    insertAtHead(head, 60);
    print(head);
 
//deletion from start
    deleteNode(1, head);
    print(head);

    insertAtHead(head, 70);
    print(head);

//deletion from mid
    deleteNode(2, head);
    print(head);
    return 0;
}
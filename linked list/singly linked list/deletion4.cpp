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
    cout << "deletion from head :";
}


void deleteTail(Node *&head, Node* &tail)
{
    Node* curr = head;
    Node* prev = NULL;

//checking if we reached at last node 
    while(curr -> next != NULL){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    tail = prev;
    cout<<"deletion from end :";
    delete curr;
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
    cout<<"deletion from mid :";
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

    
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;

    deleteTail(head, tail);
    print(head);

    
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;

    deleteMid(head, 2);
    print(head);

    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    return 0;
}
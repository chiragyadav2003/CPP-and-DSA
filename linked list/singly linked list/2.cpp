#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;   // data type of node
    Node *next; // address of next node and next is pointer name of node type
  
  //constructor called
    Node(int data){
        this->data = data;  
        this->next = NULL;  //new node next points to null
    }
};

int main()
{
     //node creation
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;


    return 0;
}
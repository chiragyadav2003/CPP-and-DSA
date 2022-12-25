#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;   // data type of node
    Node *next; // address of next node and next is pointer name of node type
};

int main()
{

    Node *node1 = new Node();
    cout << node1->data << endl;
    cout << node1->next << endl;

    return 0;
}
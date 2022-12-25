#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "enter the data" << endl;
    int data;
    cin >> data;

    // creation of node using constructor
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    // recursive call to build the left for a node
    cout << "enter the data for the left of the " << data << endl;
    root->left = buildTree(root->left);

    // recursive call to build the right of a node
    cout << "enter the data for the right of the " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{

    node *root = NULL;

    // creation of tree from root node
    root = buildTree(root);

    return 0;
}
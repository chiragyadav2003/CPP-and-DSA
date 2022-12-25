#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int n)
    {
        this->data = n;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void morrisTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    node *curr = root;

    while (curr != NULL)
    {

        if (curr->left == NULL)
        {
            cout << curr->data << " ";
            curr = curr->right;
        }

        node *prev = curr->left;

        // to reach at bottom most right part of subtree
        while (prev->right && prev->right != curr)
        {
            prev = prev->right;
        }
        // if it's right is pointing to null then create a pointer which will point its right to curr
        // now update curr
        if (prev->right == NULL)
        {
            prev->right = curr;
            curr = curr->left;
        }
        // if prev->right points curr means we have traversed it so move curr in right
        else if (prev->right == curr)
        {
            prev->right == NULL;
            cout << curr->data << " ";
            curr = curr->right;
        }
    }
}

int main()
{

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left->left = new node(8);
    root->left->left->right = new node(9);

    cout << "inorder traversal is : ";
    inorder(root);
    cout << endl;

    cout << "morris inorder traversal is : ";
    morrisTraversal(root);
    return 0;
}
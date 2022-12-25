#include <iostream>
using namespace std;
#include <queue>

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

node *insertInTree(node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }

    // insert in right part
    if (d > root->data)
    {
        root->right = insertInTree(root->right, d);
    }
    // insert in left part
    else if (d < root->data)
    {
        root->left = insertInTree(root->left, d);
    }

    return root;
}

void levelOrder(node *root)
{
    if (root == NULL)
        return;

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {

            cout << front->data << " ";

            if (front->left)
            {
                q.push(front->left);
            }

            if (front->right)
            {
                q.push(front->right);
            }
        }
    }
}

void createTree(node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {

        root = insertInTree(root, data);
        cin >> data;
    }
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

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

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main()
{

    node *root = NULL;

    createTree(root);

    cout << endl
         << "levelorder is :" << endl;
    levelOrder(root);

    cout << endl
         << "preorder is :" << endl;
    preorder(root);

    cout << endl
         << "postorder is :" << endl;
    postorder(root);

    cout << endl
         << "inorder is :" << endl;
    inorder(root);

    return 0;
}
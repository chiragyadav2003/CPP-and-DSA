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

node *minValue(node *root)
{
    node *temp = root;

    while (temp->left != NULL)
        temp = temp->left;

    return temp;
}

node *maxValue(node *root)
{
    node *temp = root;

    while (temp->right != NULL)
        temp = temp->right;

    return temp;
}

node *deleteFromBST(node *root, int value)
{
    // base case
    if (root == NULL)
    {
        return root;
    }

    // we have arrived at required root to that we have to delete
    if (root->data == value)
    {
        // case - 1
        // when root has 0 child i.e, leaf node
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        //  case - 2
        // when root has one child
        // root has only left child
        else if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }

        // root has only right child
        else if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        // case - 3
        // root has left child as well as right child
        else if (root->left != NULL && root->right != NULL)
        {
            // replace root data with minimum value from right part
            int mini = minValue(root->right)->data;
            root->data = mini;
            // now we have to delete root regarding min value from right subtree
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }

    if (root->data > value)
    {
        // traverse in left part
        root->left = deleteFromBST(root->left, value);
        // we will finally returnning root by making change in left part
        return root;
    }

    else
    {
        // traverse in right part
        root->right = deleteFromBST(root->right, value);
        // we will finally returnning root by making change in right part
        return root;
    }
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

    cout << endl;

    cout << "min value is : " << minValue(root)->data << endl;
    cout << "max value is : " << maxValue(root)->data << endl;

    cout << endl
         << "after deletion :" << endl;

    root = deleteFromBST(root, 90);

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

    cout << endl;

    cout << "min value is : " << minValue(root)->data << endl;
    cout << "max value is : " << maxValue(root)->data << endl;

    return 0;
}
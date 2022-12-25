#include <iostream>
#include <queue>
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

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root); // as root has only one element
    // so we will push seprator null after the root element
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        // purana level complete traverse ho chuka hain and we had inserted it's child in the queue
        if (temp == NULL)
        {
            cout << endl;

            // there are some child node elements are present in queue and we will push another seprator for other level
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }

            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

// inorder traversal = LNR pattern
void inorder(node *root)
{
    if (root == NULL)
        return;

    // L = traversing left part
    inorder(root->left);
    // N = printing node data
    cout << root->data << " ";
    // R = traversing right part
    inorder(root->right);
}

// preorder traversal = NLR pattern
void preorder(node *root)
{
    if (root == NULL)
        return;

    // N = print node data
    cout << root->data << " ";
    // L = traversing left part
    preorder(root->left);
    // R = traversing right part
    preorder(root->right);
}

// postorder traversal = LRN pattern
void postorder(node *root)
{
    if (root == NULL)
        return;

    // L = traverse left part
    postorder(root->left);
    // R = traverse right part
    postorder(root->right);
    // N = print node data
    cout << root->data << " ";
}

int main()
{

    node *root = NULL;

    // creation of tree from root node
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "printing level order traversal :" << endl;
    levelOrderTraversal(root);
    cout << endl;

    cout << "inorder traversal : ";
    inorder(root);
    cout << endl;

    cout << "preorder traversal :";
    preorder(root);
    cout << endl;

    cout << "postorder traversal :";
    postorder(root);
    cout << endl;

    return 0;
}
// sorting using data replacement
#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// insertion at head
node *insert()
{
    int x;
    cin >> x;
    node *head = NULL;

    while (x != -1)
    {

        if (head == NULL)
        {
            node *temp = new node(x);
            head = temp;
        }

        else
        {
            node *curr = new node(x);
            curr->next = head;
            head = curr;
        }
        cin >> x;
    }
    return head;
}

void print(node *head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void sort(node *&head)
{
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    node *temp = head;
    // counting 0, 1 and 2 in list
    while (temp != NULL)
    {

        if (temp->data == 0)
        {
            countZero++;
        }

        else if (temp->data == 1)
        {
            countOne++;
        }

        else if (temp->data == 2)
        {
            countTwo++;
        }

        temp = temp->next;
    }

    // again bring temp at head
    temp = head;

    // now replacing data
    while (temp != NULL)
    {

        if (countZero != 0)
        {
            temp->data = 0;
            countZero--;
        }
        else if (countOne != 0)
        {
            temp->data = 1;
            countOne--;
        }

        else if (countTwo != 0)
        {
            temp->data = 2;
            countTwo--;
        }

        temp = temp->next;
    }
}

int main()
{

    node *head = insert();
    print(head);

    sort(head);
    print(head);

    return 0;
}
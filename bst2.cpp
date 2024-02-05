// 3.	Beginning with an empty binary search tree,
//     construct binary search tree by inserting the values in the order given.
//     After constructing a binary tree:
//     i. Insert new node,
//     ii. Find number of nodes in longest path from root,
//     iii. Minimum data value found in the tree,
//     iv. Change a tree so that the roles of the left and right pointers are swapped at every node,
//     v. Search a value.

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define MAX 10

class node
{
public:
    int data;
    node *left;
    node *right;
    node()
    {
        this->left = NULL;
        this->right = NULL;
    }
    node(int a)
    {
        data = a;
        this->left = NULL;
        this->right = NULL;
    }
};

class Btree
{
public:
    node *root;
    Btree();
    void create();
    void insert(int);
};

Btree ::Btree()
{
    root = NULL;
}

void Btree ::create()
{
    int x, n;
    node * n1;
    cout << "How many numbers to be inserted ?";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Number : ";
        cin >> x;
        insert(x);
    }
}

void Btree ::insert(int x)
{
    node *temp = new node(x);
    if (root == NULL)
    {
        root = temp;
        cout << "\tInserted !!" << endl;
    }
    else
    {
        node *cur = root;
        node *prev = root;
        while (cur != NULL)
        {
            if (cur->data > temp->data)
            {
                prev = cur;
                cur = cur->right;
            }
            else if (cur->data < temp->data)
            {
                prev = cur;
                cur = cur->left;
            }
            else
            {
                cout << "Already inserted !!" << endl;
                return;
            }
        }
        if (prev->data > temp->data)
        {
            prev->right = temp;
            cout << "\tInserted !!" << endl;
        }
        else if (prev->data < temp->data)
        {
            prev->left = temp;
            cout << "\tInserted !!" << endl;
        }
    }
}

// To find the longest path from root :
// I have used the BFS approach -

int numberOfNodesInLongestPath(node *root)
{

    // int depth = 0;

    // queue<node *> q;

    // q.push(root);
    // q.push(NULL);
    // while (!q.empty())
    // {
    //     node *temp = q.front();
    //     q.pop();

    //     if (temp == NULL)
    //     {
    //         depth++;
    //     }

    //     if (temp != NULL)
    //     {
    //         if (temp->left)
    //         {
    //             q.push(temp->left);
    //         }
    //         if (temp->right)
    //         {
    //             q.push(temp->right);
    //         }
    //     }

    //     else if (!q.empty())
    //     {
    //         q.push(NULL);
    //     }
    // }
    // return depth;

    if (root == NULL)
    {
        return -1;
    }
    

    int lDepth = numberOfNodesInLongestPath(root->left);
    int rDepth = numberOfNodesInLongestPath(root->right);
    
    if (lDepth > rDepth)
        return (lDepth + 1);
    else
        return (rDepth + 1);
}

int main(int argc, char const *argv[])
{
    Btree b;
    b.create();
    cout << numberOfNodesInLongestPath(b.root);
    return 0;
}
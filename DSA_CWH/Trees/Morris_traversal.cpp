#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(Node *root)
{
    if (root)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

Node *createBST(Node *root, int val)
{
    if (!root)
    {
        root = new Node(val);
        return root;
    }
    if (val < root->data)
        root->left = createBST(root->left, val);
    else
        root->right = createBST(root->right, val);
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = createBST(root, data);
        cin >> data;
    }
}

void MorrisTraversal(Node *root)
{
    cout << "\nMorris Traversal: \n";
    Node *curr = root;
    while (curr)
    {
        if (curr->left)
        {
            Node *pred = curr->left;
            while (pred->right && pred->right != curr)
                pred = pred->right;
            if (pred->right == NULL)
            {
                pred->right = curr;
                curr = curr->left;
            }
            else // pred->right = curr;
            {
                cout << curr->data << " ";
                pred->right = NULL;
                curr = curr->right;
            }
        }
        else
        {
            cout << curr->data << " ";
            curr = curr->right;
        }
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter input:\n";
    takeInput(root);
    cout << "\nPrinting Inorder:\n";
    inorder(root);
    MorrisTraversal(root);
    return 0;
}
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

void LOT(Node *root)
{
    cout << "\nPrinting LOT:\n";
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp)
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        else
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
    }
}
int main()
{
    Node *root = NULL;
    takeInput(root);
    cout << "\nPrinting Inorder:\n";
    inorder(root);
    LOT(root);
    return 0;
}
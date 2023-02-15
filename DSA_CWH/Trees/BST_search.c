#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *create(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int searchRecursive(struct node *root, int val)
{
    if (root == NULL)
        return 0;
    if (val == root->data)
        return 1;
    if (val < root->data)
        return searchRecursive(root->left, val);
    else if (val > root->data)
        return searchRecursive(root->right, val);

    return 0;
}

int searchIterative(struct node *root, int val)
{
    while (root != NULL)
    {
        if (root->data == val)
            return 1;
        else if (val < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return 0;
}
int main()
{
    struct node *root = create(10);
    struct node *p2 = create(5);
    struct node *p3 = create(15);
    struct node *p4 = create(3);
    struct node *p5 = create(7);
    struct node *p6 = create(6);

    root->left = p2;
    root->right = p3;
    p2->left = p4;
    p2->right = p5;
    p5->left = p6;

    /*
           Tree:
             10
            / \
           5   15
          / \
         3   7
            /
           6
    */

    if (searchRecursive(root, 15))
        printf("Value found\n");
    else
        printf("Value not found\n");

    if (searchIterative(root, 69))
        printf("Value found\n");
    else
        printf("Value not found\n");
    return 0;
}
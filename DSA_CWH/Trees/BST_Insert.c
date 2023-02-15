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

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

struct node *insert(struct node *root, int val)
{
    struct node *new = create(val);
    struct node *parent;
    if (root == NULL)
        root = new;
    else
    {
        struct node *temp = root;
        while (temp != NULL)
        {
            if (val < temp->data)
            {
                parent = temp;
                temp = temp->left;
            }
            else
            {
                parent = temp;
                temp = temp->right;
            }
        }
        if (val < parent->data)
            parent->left = new;
        else
            parent->right = new;
    }
    return root;
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
    inorder(root);
    printf("\n");
    insert(root, 12);
    printf("\n");
    inorder(root);
    return 0;
}
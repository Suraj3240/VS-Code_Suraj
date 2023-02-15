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

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *root = create(4);
    struct node *p2 = create(1);
    struct node *p3 = create(6);
    struct node *p4 = create(3);
    struct node *p5 = create(2);
    struct node *p6 = create(5);

    root->left = p2;
    root->right = p3;
    p2->left = p4;
    p2->right = p5;
    p5->left = p6;

    /*
           Tree:
             4
            / \
           1   6
          / \
         3   2
             /
            5
    */
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    preorder(root);
    return 0;
}
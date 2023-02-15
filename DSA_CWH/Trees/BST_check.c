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
}
int min = -100000;
int max = 100000;

int isBST(struct node *root, int min, int max)
{
    if (root == NULL)
        return 1;
    if (root->data > max || root->data < min)
        return 0;
    int left = isBST(root->left, min, root->data - 1);
    int right = isBST(root->right, root->data + 1, max);

    if (left == 1 && right == 1)
        return 1;
    return 0;
}

// If it is a BST, then it's Inorder will be in sorted order.
int arr[6];
void inorder(struct node *root)
{
    static int i = 0;
    if (root != NULL)
    {
        inorder(root->left);
        // printf("%d ", root->data);
        arr[i] = root->data;
        i++;
        inorder(root->right);
    }
}
int check_array_BST(int arr[])
{
    for (int j = 0; j < 5; j++)
    {
        if (arr[j] > arr[j + 1])
            return 0;
        // printf("%d ", arr[j]);
    }
    return 1;
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

    printf("%d ", isBST(root, min, max));
    // inorder(root);
    // printf("%d ", check_array_BST(arr));

    return 0;
}
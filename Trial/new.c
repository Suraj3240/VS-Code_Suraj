#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *start, *temp = NULL;

void create()
{
    int n;
    struct Node *newnode;
    printf("Enter the no. of nodes to be created \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data \n");
        scanf("%d", &newnode->data);
        if (start == NULL)
        {
            start = newnode;
        }
        else
        {
            temp = start;
            while (temp != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}
void insert_end()
{
    int d;
    printf("Enter data to be inserted at end \n");
    scanf("%d", &d);
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    if (newnode == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        newnode->data = d;
        newnode->next = NULL;
        temp = start;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
        printf("Data inserted \n");
    }
}
void display()
{

    if (start == NULL)
    {
        printf("Linkedlist is empty!\n");
    }

    temp = start;
    while (temp != NULL)
    {
        printf("\n\t%d", temp, temp->data);
        temp = temp->next;
    }
}

void main()
{
    int check;
    int a = 1;
    while (a)
    {
        printf("\n------LinkedList Operations------\n");
        printf("1 --> create(), Create a linkedlist with n nodes\n");
        printf("2 --> display(),  Display all nodes\n");
        printf("3 --> insert_end(), Insert a Node at end\n");
        printf("4 --> insert(), insert a node at specified location\n");
        printf("5 --> delete1(), delete a node at specified location \n");
        printf("6 --> Exit\n\n");
        printf("Enter an option: ");
        scanf("%d", &check);

        switch (check)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_end();
            break;
        default:
            a = 0;
            printf("Enter a correct option!!\n");
            break;
        }
    }
}
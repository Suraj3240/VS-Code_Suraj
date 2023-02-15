#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *tail = NULL;

void creation_ll()
{
    int n;
    printf("Enter size of linked list: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int val;
        printf("Enter value of %d: ", i);
        scanf("%d", &val);
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p->data = val;
        p->next = NULL;
        if (head == NULL)
        {
            head = p;
            tail = p;
        }
        else
        {
            tail->next = p;
            tail = p;
        }
    }
}

void print_ll()
{
    if (head == NULL)
    {
        printf("Linked list is Empty\n");
    }
    else
    {
        struct node *current = head;
        while (current != NULL)
        {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

void insertion_begin()
{
    int val;
    printf("Enter value to be inserted at the beginning: ");
    scanf("%d", &val);
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = val;
    p->next = head;
    head = p;
}

void insertion_end()
{
    int val;
    printf("Enter value to be inserted at the end: ");
    scanf("%d", &val);
    struct node *temp = head;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = val;
    int i = 0;
    while (temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    temp->next = p;
    p->next = NULL;
}

void insertion_node()
{
    int node, val;
    printf("After which node you want value to be inserted: ");
    scanf("%d", &node);
    printf("Enter value to be inserted at the end: ");
    scanf("%d", &val);
    struct node *temp = head;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = val;
    for (int i = 1; i <= node; i++)
    {
        temp = temp->next;
    }
    p->next = temp->next;
    temp->next = p;
}

void deletion_begin()
{
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void deletion_end()
{
    struct node *temp = head;
    struct node *p = head->next;
    while (p->next != NULL)
    {
        temp = temp->next;
        p = p->next;
    }
    temp->next = NULL;
    free(p);
}

void deletion_between()
{
    int node;
    printf("Which node you want to be deleted: ");
    scanf("%d", &node);
    int node_1 = node - 1;
    struct node *prev = head;
    while (node_1--)
    {
        prev = prev->next;
    }
    struct node *p = prev->next;
    prev->next = p->next;
    free(p);
}

void deletion_value()
{
    int val;
    printf("Enter value to be deleted: ");
    scanf("%d", &val);
    struct node *temp = head;
    struct node *p = head->next;
    while (p->data != val && p->next != NULL)
    {
        temp = temp->next;
        p = p->next;
    }
    if (p->data == val)
    {
        temp->next = p->next;
        free(p);
    }
    else
    {
        printf("No such element found to be deleted.\n");
    }
}

void search_ll()
{
    struct node *ptr = head;
    printf("Which value to search in linked list: ");
    int val;
    scanf("%d", &val);
    int i = 0;
    while (ptr->data != val && ptr->next != NULL)
    {
        ptr = ptr->next;
        i++;
    }
    if (ptr->data == val)
    {
        printf("The value was found out at: %d", i);
    }
    else
    {
        printf("No such element found.\n");
    }
}

void print_reverse_recursive(struct node *head)
{
    if (head == NULL)
        return;

    print_reverse(head->next);
    printf("%d ", head->data);
}

void reverse_LL()
{
    struct node *prev = NULL, *current = head, *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }
    head = prev;
}

int main()
{

    int choice;
    while (choice != 9)
    {
        printf("\nWhat you want to be done:\n1.Create a LL\n2.Print the LL\n3.Insert element at the first\n4.Insert Element at the end\n5.Insert element at the specific node\n6.Delete element at the beginning\n7.Delete element at the end\n8.Delete element at the specific node\n9.Exit\n\nPlease enter a number: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            creation_ll();
            break;
        case 2:
            print_ll();
            break;
        case 3:
            insertion_begin();
            break;
        case 4:
            insertion_end();
            break;
        case 5:
            insertion_node();
            break;
        case 6:
            deletion_begin();
            break;
        case 7:
            deletion_end();
            break;
        case 8:
            deletion_between();
            break;
        case 9:
            printf("Thank You :))");
            return 0;

        default:
            printf("Enter a valid number....\n");
            break;
        }
    }

    return 0;
}
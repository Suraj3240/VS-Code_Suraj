#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head, *tail = NULL;

void create_dll()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        int val;
        printf("Enter value %d ", i);
        scanf("%d", &val);
        new->data = val;
        if (head == NULL)
        {
            head = new;
            head->prev = NULL;
            tail = new;
            tail->next = NULL;
        }
        else
        {
            tail->next = new;
            new->prev = tail;
            tail = new;
            tail->next = NULL;
        }
    }
}

void print_cll()
{
    if (head == NULL)
        printf("It is empty...\n");
    else
    {
        printf("\nYour linked list is:\n");
        struct node *ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

void print_reverse()
{
    if (head == NULL)
        printf("It is empty...\n");
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        printf("\nThe reversed print:\n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->prev;
        }
        printf("\n");
    }
}

void insert_first()
{
    if (head == NULL)
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        int val;
        printf("Enter the value to be inserted at the beginning: ");
        scanf("%d", &val);
        ptr->data = val;
        ptr->prev = NULL;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        int val;
        printf("Enter the value to be inserted at the beginning: ");
        scanf("%d", &val);
        ptr->data = val;
        ptr->prev = NULL;
        ptr->next = head;
        head->prev = ptr;
        head = ptr;
    }
}

void insert_end()
{
    if (head == NULL)
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        int val;
        printf("Enter the value to be inserted at the beginning: ");
        scanf("%d", &val);
        ptr->data = val;
        ptr->prev = NULL;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        int val;
        printf("Enter the value to be inserted at the end: ");
        scanf("%d", &val);
        ptr->data = val;
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = NULL;
        ptr->prev = temp;
    }
}

void delete_dll()
{
    struct node *temp, *p, *q;
    int val;
    printf("Enter the element to be deleted:\n");
    scanf("%d", &val);
    temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            p = temp->prev;
            q = temp->next;
            p->next = q;
            q->prev = p;
            free(temp);
            printf("%d is deleted!\n", val);
        }
        else
        {
            temp = temp->next;
        }
    }
    // return (head);
}

int main()
{
    int choice;
    while (choice != 7)
    {
        printf("\nWhat you want to be done:\n1.Create a doubly LL\n2.Print the DLL\n3.Print the DLL in reverse order\n4.Insert element at the first\n5.Insert Element at the end\n6.Delete a particular element\n7.Exit\n\nPlease enter a number: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create_dll();
            break;
        case 2:
            print_cll();
            break;
        case 3:
            print_reverse();
            break;
        case 4:
            insert_first();
            break;
        case 5:
            insert_end();
            break;
        case 6:
            delete_dll();
            break;
        case 7:
            printf("Thank You :))");
            return 0;

        default:
            printf("Enter a valid number....\n");
            break;
        }
    }

    return 0;
}
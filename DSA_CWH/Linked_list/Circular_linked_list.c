#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void creation_cll()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int val;
        printf("Enter value %d: ", i);
        scanf("%d", &val);
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = val;
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            tail = new;
        }
        else
        {
            tail->next = new;
            tail = new;
        }
    }
    tail->next = head;
}

void print_ll()
{
    printf("\nYour linked list is:\n");
    struct node *current = head;
    do
    {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);

    // ********** For testing **********
    // printf("%d ", current->data);
    // current = current->next;
    // printf("%d ", current->data);
    // current = current->next;
    // printf("%d ", current->data);
    // current = current->next;
    // printf("%d ", current->data);
    // current = current->next;
    // printf("%d ", current->data);

    printf("\n");
}

void insert_first()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    int val;
    printf("Enter value to be inserted at the beginning: ");
    scanf("%d", &val);
    ptr->data = val;
    struct node *temp = head->next;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = head;
    head = ptr;
}
void insert_end()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    int val;
    printf("Enter value to be inserted at the end: ");
    scanf("%d", &val);
    ptr->data = val;
    struct node *temp = head->next;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = head;
}

void insert_node()
{
    int node, val;
    printf("After which node you want value to be inserted: ");
    scanf("%d", &node);
    printf("Enter value to be inserted: ");
    scanf("%d", &val);
    struct node *temp = head;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = val;
    for (int i = 1; i < node; i++)
    {
        temp = temp->next;
    }
    p->next = temp->next;
    temp->next = p;
}

void delete_begin()
{
    struct node *ptr = head;
    while (ptr->next != head)
        ptr = ptr->next;
    ptr->next = head->next;
    free(head);
    head = ptr->next;
}

void delete_end()
{
    struct node *temp = head;
    struct node *p = head->next;
    while (p->next != head)
    {
        temp = temp->next;
        p = p->next;
    }
    temp->next = head;
    free(p);
}

void delete_between()
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

int main()
{

    int choice;
    while (choice != 9)
    {
        printf("\nWhat you want to be done:\n1.Create a circular LL\n2.Print the CLL\n3.Insert element at the first\n4.Insert Element at the end\n5.Insert element at the specific node\n6.Delete element at the beginning\n7.Delete element at the end\n8.Delete element at the specific node\n9.Exit\n\nPlease enter a number: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            creation_cll();
            break;
        case 2:
            print_ll();
            break;
        case 3:
            insert_first();
            break;
        case 4:
            insert_end();
            break;
        case 5:
            insert_node();
            break;
        case 6:
            delete_begin();
            break;
        case 7:
            delete_end();
            break;
        case 8:
            delete_between();
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
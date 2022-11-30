#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff, pow;
    struct node *next;
};

struct node *create_pol(struct node *head, int coeff, int pow)
{
    struct node *temp, *extra;
    if (head == NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->coeff = coeff;
        temp->pow = pow;
        temp->next = NULL;
        head = temp;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        extra = (struct node *)malloc(sizeof(struct node));
        extra->coeff = coeff;
        extra->pow = pow;
        extra->next = NULL;
        temp->next = extra;
    }
    return head;
}

struct node *poly_add(struct node *p1, struct node *p2, struct node *poly_final)
{
    struct node *po1 = p1, *po2 = p2, *res;
    while (po1 != NULL && po2 != NULL)
    {
        if (poly_final == NULL)
        {
            poly_final = (struct node *)malloc(sizeof(struct node));
            res = poly_final;
        }
        else
        {
            res->next = (struct node *)malloc(sizeof(struct node));
            res = res->next;
        }

        if (po1->pow < po2->pow)
        {
            res->pow = po1->pow;
            res->coeff = po1->coeff;
            po1 = po1->next;
        }
        else if (po1->pow > po2->pow)
        {
            res->pow = po2->pow;
            res->coeff = po2->coeff;
            po2 = po2->next;
        }
        else
        {
            res->pow = po2->pow;
            res->coeff = po1->coeff + po2->coeff;
            po1 = po1->next;
            po2 = po2->next;
        }
    }
    while (po1 != NULL)
    {
        res->next = (struct node *)malloc(sizeof(struct node));
        res = res->next;

        res->pow = po1->pow;
        res->coeff = po1->coeff;
        po1 = po1->next;
    }
    while (po2 != NULL)
    {
        res->next = (struct node *)malloc(sizeof(struct node));
        res = res->next;

        res->pow = po2->pow;
        res->coeff = po2->coeff;
        po2 = po2->next;
    }
    res->next = NULL;
    return poly_final;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%dx^%d + ", temp->coeff, temp->pow);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    struct node *pol_1 = NULL, *pol_2 = NULL, *pol_final = NULL;

    int coeff, pow;
    int choice;
    while (choice != 5)
    {
        printf("\nWhat you want to be done:\n1.Add to poly 1\n2.Add to poly 2\n3.Add 2 polys\n4.Display sum\n5.Exit\n\nPlease enter a number: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter coeff: ");
            scanf("%d", &coeff);
            printf("Enter pow: ");
            scanf("%d", &pow);
            pol_1 = create_pol(pol_1, coeff, pow);
            break;
        case 2:
            printf("Enter coeff: ");
            scanf("%d", &coeff);
            printf("Enter pow: ");
            scanf("%d", &pow);
            pol_2 = create_pol(pol_2, coeff, pow);
            break;
        case 3:
            pol_final = poly_add(pol_1, pol_2, pol_final);
            break;
        case 4:
            printf("\nPolynomial 1:\n");
            display(pol_1);
            printf("\nPolynomial 2:\n");
            display(pol_2);
            printf("\nPolynomial sum:\n");
            display(pol_final);
        case 5:
            printf("Thank You :))");
            return 0;
        default:
            printf("Enter a valid number....\n");
            break;
        }
    }
    return 0;
}

// pol_1 = create_pol(pol_1, 10, 2);
// pol_1 = create_pol(pol_1, 20, 3);
// pol_2 = create_pol(pol_1, 10, 2);
// pol_2 = create_pol(pol_1, 20, 3);

// display_sum(pol_1);
// display_sum(pol_2);
// pol_final = poly_add(pol_1, pol_2, pol_final);
// display_sum(pol_final);
/*
Design a structure named employee to print names and number of employees
who have 5 years or more experience and salary less than 10,000 using
array of structure
*/

#include <stdio.h>
#include <conio.h>

struct emp
{
    char name[20];
    int exp, sal;
};

void main()
{
    struct emp e1[20];
    int n;
    printf("Enter no of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of employees: ");
        scanf("%s", &e1[i].name);
        printf("Enter experinece of employees: ");
        scanf("%d", &e1[i].exp);
        printf("Enter salary of employees: ");
        scanf("%d", &e1[i].sal);
        printf("\n");
    }
    int num_1 = 1;
    printf("|No.\t|Name\t|Exp.\t|Salary\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%d\t|%s\t|%d\t|%d\n", num_1, e1[i].name, e1[i].exp, e1[i].sal);
        num_1++;
    }

    int num = 1;
    printf("\n\n|No.\t|Name\n");
    for (int i = 0; i < n; i++)
    {
        if (e1[i].exp >= 5 && e1[i].sal < 10000)
        {
            printf("|%d\t|%s\n", num, e1[i].name);
            num++;
        }
    }
    getch();
}
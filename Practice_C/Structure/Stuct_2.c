/*
A company needs to maintain data about their employees as employee name,
employee department, date of joining, salary. Write a program which will
store these details and list the employees whose salary is greater than ₹50,000.
*/

#include <stdio.h>
#include <conio.h>

struct emp
{
    char name[20], dept[15], doj[10];
    int sal;
};

void main()
{
    struct emp e1[20];
    int n;
    printf("Enter no of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of employee: ");
        scanf("%s", &e1[i].name);
        printf("Enter department of employee: ");
        scanf("%s", &e1[i].dept);
        printf("Enter Date of Joining of employee: ");
        scanf("%s", &e1[i].doj);
        printf("Enter salary of employee: ");
        scanf("%d", &e1[i].sal);
        printf("\n");
    }
    int num_1 = 1;
    printf("|No.\t|Name\t|Dept.\t|DOJ.\t\t|Salary\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%d\t|%s\t|%s\t|%s\t|%d\n", num_1, e1[i].name, e1[i].dept, e1[i].doj, e1[i].sal);
        num_1++;
    }

    int num = 1;
    printf("\n\n|No.\t|Name\n");
    for (int i = 0; i < n; i++)
    {
        if (e1[i].sal > 50000)
        {
            printf("|%d\t|%s\n", num, e1[i].name);
            num++;
        }
    }
    getch();
}
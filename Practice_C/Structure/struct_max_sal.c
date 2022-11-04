/*
Create a structure and print the details of employees
whose salary is highest among all the employees.
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
    struct emp e1[20], temp;
    int max_sal = 0;
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

        if (max_sal < e1[i].sal)
        {
            max_sal = e1[i].sal;
            temp = e1[i];
        }
        printf("\n");
    }
    int num_1 = 1;
    printf("|No.\t|Name\t|Exp.\t|Salary\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%d\t|%s\t|%d\t|%d\n", num_1, e1[i].name, e1[i].exp, e1[i].sal);
        num_1++;
    }

    printf("\n\n|No.\t|Name\t|Exp.\t|Salary\n");
    printf("|1\t|%s\t|%d\t|%d\n", temp.name, temp.exp, temp.sal);

    getch();
}
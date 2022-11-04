#include <stdio.h>
#include <conio.h>

struct student
{
    char name[20];
    int roll_no, percentage;
};

void main()
{
    int n;
    struct student s1[10], temp;
    printf("Enter no of Students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name: ");
        scanf("%s", &s1[i].name);
        printf("Enter the roll no: ");
        scanf("%d", &s1[i].roll_no);
        printf("Enter the percentage: ");
        scanf("%d", &s1[i].percentage);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (s1[j].percentage < s1[j + 1].percentage)
            {
                temp = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = temp;
            }
        }
    }
    printf("|Name\t|Roll\t|Percentage\t\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%s\t|%d\t|%d\t\n", s1[i].name, s1[i].roll_no, s1[i].percentage);
    }

    getch();
}
#include <stdio.h>
#include <conio.h>

struct student
{
    char name[20];
    int roll, sub1, sub2, sub3, sub4;
};

void main()
{
    struct student s1[5];
    int ans[5];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name: ");
        scanf("%s", &s1[i].name);
        printf("Enter roll no: ");
        scanf("%d", &s1[i].roll);
        printf("Enter marks of sub1: ");
        scanf("%d", &s1[i].sub1);
        printf("Enter marks of sub2: ");
        scanf("%d", &s1[i].sub2);
        printf("Enter marks of sub3: ");
        scanf("%d", &s1[i].sub3);
        printf("Enter marks of sub4: ");
        scanf("%d", &s1[i].sub4);
        ans[i] = s1[i].sub1 + s1[i].sub2 + s1[i].sub3 + s1[i].sub4;
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n\nTotal= %d", ans[i]);
        printf("\nPercentage= %f", (ans[i] * 1.0) / 4);
    }

    getch();
}
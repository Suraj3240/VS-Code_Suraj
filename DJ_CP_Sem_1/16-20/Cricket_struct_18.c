#include <stdio.h>
#include <conio.h>

struct cricketer
{
    char name[20], country_name[15];
    int best_score, batting_avg;
};

void main()
{
    struct cricketer c1[25], temp;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Player's name: ");
        scanf("%s", &c1[i].name);
        printf("Enter the Player's country: ");
        scanf("%s", &c1[i].country_name);
        printf("Enter the Player's Best Score: ");
        scanf("%d", &c1[i].best_score);
        printf("Enter the Player's Batting Average: ");
        scanf("%d", &c1[i].batting_avg);
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (c1[j].batting_avg < c1[j + 1].batting_avg)
            {
                temp = c1[j];
                c1[j] = c1[j + 1];
                c1[j + 1] = temp;
            }
        }
    }

    printf("|Player's Name\t|Country\t|Best Score\t\t|Batting Average\n");
    for (int i = 0; i < 5; i++)
    {
        printf("|%s\t\t|%s\t\t|%d\t\t\t|%d\n", c1[i].name, c1[i].country_name, c1[i].best_score, c1[i].batting_avg);
    }

    getch();
}
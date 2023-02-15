#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char a[20];
    int count = 0;
    gets(a);
    int len = strlen(a);

    for (int i = 0; i < len / 2; i++)
    {
        if (a[i] == a[len - i - 1])
        {
            count++;
        }
    }

    if (count == len / 2)
    {
        printf("It is a Palindrome.");
    }
    else
    {
        printf("It is not a Palindrome.");
    }
    getch();
}
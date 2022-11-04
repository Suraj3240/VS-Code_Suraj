#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    char str[100];
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
        ;
    printf("%d", i);
    getch();
}
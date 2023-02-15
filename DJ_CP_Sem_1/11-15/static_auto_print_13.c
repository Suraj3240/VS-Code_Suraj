#include <stdio.h>
#include <conio.h>

void print(void)
{
    int a = 0;
    static int b = 0;
    printf("%d\t%d\n", a, b);
    a++;
    b++;
}

void main()
{
    printf("a\tb\n\n");
    for (int i = 1; i <= 3; i++)
    {
        print();
    }
    getch();
}
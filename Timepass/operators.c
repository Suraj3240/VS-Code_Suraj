#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    a = 10;
    b = c = a;

    b = --a;
    a += a++;
    a -= a--;
    printf("%d\n", b);
    printf("%d\n", a);
    printf("%d\n", c);

    getch();
}
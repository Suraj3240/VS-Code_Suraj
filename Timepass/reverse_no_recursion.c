#include <stdio.h>
#include <conio.h>

int ld, sum = 0;
int reverse(int a)
{
    if (a > 0)
    {
        ld = a % 10;
        // a = a / 10;
        sum = (sum * 10) + ld;
        reverse(a / 10);
    }
    else
        return sum;
    return sum;
}

void main()
{
    int n, num;
    printf("Enter a number to be reversed: ");
    scanf("%d", &n);
    int fun = reverse(n);
    printf("%d", fun);
    getch();
}
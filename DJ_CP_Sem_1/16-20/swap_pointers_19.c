#include <stdio.h>
#include <conio.h>

void swap_call_by_value(int m, int n)
{
    int temp;
    temp = m;
    m = n;
    n = temp;
    printf("\nBy call by value: %d %d\n", m, n);
}

void swap_call_by_reference(int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
    printf("By call by reference: %d %d", *m, *n);
}

void main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    swap_call_by_value(a, b);
    swap_call_by_reference(&a, &b);
    getch();
}
/*
Write a program to add 2 numbers using function. Pass the
pointers to the variables as reference to the function.
*/

#include <stdio.h>
#include <conio.h>
// int ans;                   ----------->>> global variable
void add(int *m, int *n)
{
    int ans = *m + *n;
    printf("The sum is: %d", ans);
}
void main()
{
    int a, b;
    printf("Enter 2 nos to add: ");
    scanf("%d %d", &a, &b);
    add(&a, &b);
    // printf("The sum is: %d", ans);         ------->>> to access this line, use global variable.
    getch();
}
/*
Write a program to accept a set of numbers and print those
numbers using pointers. Also find average of these integers.
*/

#include <stdio.h>
#include <conio.h>

void print_mean(int *a)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(a + i));
        sum += *(a + i);
    }
    float mean = (sum * 1.0) / 5;
    printf("\nMean is: %.2f", mean);
}

void main()
{
    int arr[10], *p;
    p = &arr;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d no: ", i + 1);
        scanf("%d", &arr[i]);
    }

    print_mean(p);
    getch();
}
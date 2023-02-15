#include <stdio.h>
#include <stdlib.h>
#define max 5

int arr[max];
int top = -1;

int isFull()
{
    if (top == max - 1)
        return 1;
    return 0;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    return 0;
}

void push()
{
    if (isFull())
        printf("The stack is full.\n");
    else
    {
        top++;
        int val;
        printf("Enter value to be inserted: ");
        scanf("%d", &val);
        arr[top] = val;
    }
}

int pop()
{
    int val;
    if (isEmpty())
    {
        printf("The stack is empty.\n");
        return -1;
    }
    else
    {
        val = arr[top];
        top--;
    }
    return val;
}

void peek()
{
    if (isEmpty())
        printf("The stack is empty.\n");
    else
    {
        printf("The topmost element is: %d\n", arr[top]);
    }
}

void display()
{
    if (isEmpty())
        printf("The stack is empty.\n");
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int choice;
    while (choice != 4)
    {
        printf("\nWhat you want to be done:\n1.Push element in a stack\n2.Pop element from a stack\n3.Display stack\n4.Exit\n\nPlease enter a number: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Thank You :))");
            return 0;
        default:
            printf("Enter a valid number....\n");
            break;
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define max 5

int arr[max];
int front = -1, rear = -1;

int isFull()
{
    if (rear == max - 1)
        return 1;
    return 0;
}
int isEmpty()
{
    if (front == -1)
        return 1;
    return 0;
}
void enquque()
{
    if (isFull())
    {
        printf("Queue is full.\n");
    }
    else if (isEmpty())
    {
        int val;
        printf("Enter value to be inserted: ");
        scanf("%d", &val);
        front++;
        rear++;
        arr[rear] = val;
    }
    else
    {
        int val;
        printf("Enter value to be inserted: ");
        scanf("%d", &val);
        rear++;
        arr[rear] = val;
    }
}
void dequeue()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Element dequeued is: %d\n", arr[front]);
        front++;
    }
}
void display()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Your queue is: \n");
        int temp = front;
        while (temp <= rear)
        {
            printf("%d ", arr[temp]);
            temp++;
        }
    }
}
int main()
{
    int choice;
    while (choice != 4)
    {
        printf("\nWhat you want to be done:\n1.Enqueue\n2.Dequeue\n3.Display queue\n4.Exit\n\nPlease enter a number: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enquque();
            break;
        case 2:
            dequeue();
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

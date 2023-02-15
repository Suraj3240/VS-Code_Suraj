#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;

    return 0;
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;

    return 0;
}

void push(struct stack *ptr)
{
    if (isFull(ptr))
    {
        printf("The stack is Full.\n");
    }
    else
    {
        int val;
        printf("Enter value: ");
        scanf("%d", &val);
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
void pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("The stack is Empty.\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("The popped element is: %d\n", val);
    }
}

void display(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("The stack is Empty.\n");
    }
    else
    {
        struct stack *temp = ptr;
        printf("\n");
        for (int i = temp->top; i >= 0; i--)
        {
            printf("%d ", temp->arr[i]);
            // temp->top--;
        }
        printf("\n");
    }
}

void peek(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("The stack is Empty.\n");
    }
    else
    {
        printf("The topmost element is: %d\n", ptr->arr[ptr->top]);
    }
}

int main()
{
    struct stack *sp;
    sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("\nFull: %d\nEmpty: %d\n", isFull(sp), isEmpty(sp));
    push(sp);
    push(sp);
    push(sp);
    push(sp);
    push(sp);
    push(sp);
    peek(sp);
    printf("\nFull: %d\nEmpty: %d\n", isFull(sp), isEmpty(sp));
    display(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    display(sp);
    printf("\nFull: %d\nEmpty: %d\n", isFull(sp), isEmpty(sp));

    return 0;
}
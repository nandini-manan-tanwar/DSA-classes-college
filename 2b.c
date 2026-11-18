
#include <stdio.h>
#include <stdlib.h>

int *stack;
int top = -1;
int capacity;

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top == capacity - 1)
        return 1;
    else
        return 0;
}

void push(int x)
{
    if (isFull())
    {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = x;
    printf("%d pushed into stack\n", x);
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Popped element: %d\n", stack[top--]);
}

void peek()
{
    if (isEmpty())
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top element: %d\n", stack[top]);
}

void display()
{
    int i;

    if (isEmpty())
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack elements: ");

    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main()
{
    int choice, x;

    printf("Enter stack capacity: ");
    scanf("%d", &capacity);

    if (capacity <= 0)
    {
        printf("Invalid capacity\n");
        return 0;
    }

    stack = (int *)malloc(capacity * sizeof(int));

    if (stack == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. isFull");
        printf("\n4. isEmpty");
        printf("\n5. Display");
        printf("\n6. Peek");
        printf("\n7. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &x);
                push(x);
                break;

            case 2:
                pop();
                break;

            case 3:
                if (isFull())
                    printf("Stack is Full\n");
                else
                    printf("Stack is Not Full\n");
                break;

            case 4:
                if (isEmpty())
                    printf("Stack is Empty\n");
                else
                    printf("Stack is Not Empty\n");
                break;

            case 5:
                display();
                break;

            case 6:
                peek();
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 7);

    free(stack);

    return 0;
}

#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue()
{
    int value;

    if ((rear + 1) % MAX == front)
    {
        printf("Queue Overflow!\n");
    }
    else
    {
        printf("Enter element: ");
        scanf("%d", &value);

        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % MAX;
        }

        queue[rear] = value;

        printf("%d inserted into queue.\n", value);
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow!\n");
    }
    else
    {
        printf("%d deleted from queue.\n", queue[front]);

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Queue elements are: ");

        i = front;

        while (1)
        {
            printf("%d ", queue[i]);

            if (i == rear)
                break;

            i = (i + 1) % MAX;
        }

        printf("\n");
    }
}

void isFull()
{
    if ((rear + 1) % MAX == front)
        printf("Queue is Full.\n");
    else
        printf("Queue is not Full.\n");
}

void isEmpty()
{
    if (front == -1)
        printf("Queue is Empty.\n");
    else
        printf("Queue is not Empty.\n");
}

int main()
{
    int choice;

    while (choice != 6)
    {
        printf("\n--- CIRCULAR QUEUE ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. isFull\n");
        printf("5. isEmpty\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                isFull();
                break;

            case 5:
                isEmpty();
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } 

    return 0;
}
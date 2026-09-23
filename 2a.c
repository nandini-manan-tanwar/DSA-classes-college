// WAP to perform Push, Pop, Peek, Display, isFull and isEmpty
#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// Check if stack is full
int isFull() {
    return (top == MAX - 1);
}

// Check if stack is empty
int isEmpty() {
    return (top == -1);
}

// Push operation
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// Pop operation
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// Peek operation
void peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Top element = %d\n", stack[top]);
    }
}

// Display operation
void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {
    int choice, value;

    do {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. isFull\n");
        printf("6. isEmpty\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                if (isFull())
                    printf("Stack is Full\n");
                else
                    printf("Stack is Not Full\n");
                break;

            case 6:
                if (isEmpty())
                    printf("Stack is Empty\n");
                else
                    printf("Stack is Not Empty\n");
                break;

            case 7:
                printf("Program terminated.\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 7);

    return 0;
}
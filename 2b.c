#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

// isEmpty operation
int isEmpty() {
    return (top == NULL);
}

// isFull operation
int isFull() {
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
        return 1;
    free(temp);
    return 0;
}

// Push operation
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed into stack\n", value);
}

// Pop operation
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return;
    }

    struct Node *temp = top;
    printf("%d popped from stack\n", top->data);
    top = top->next;
    free(temp);
}

// Peek operation
void peek() {
    if (isEmpty())
        printf("Stack is Empty\n");
    else
        printf("Top element = %d\n", top->data);
}

// Display operation
void display() {
    if (isEmpty()) {
        printf("Stack is Empty\n");
        return;
    }

    struct Node *temp = top;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, value;

    do {
        printf("\n--- DYNAMIC STACK MENU ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n");
        printf("5. isFull\n6. isEmpty\n7. Exit\n");
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
                    printf("Memory Full\n");
                else
                    printf("Memory Available\n");
                break;

            case 6:
                if (isEmpty())
                    printf("Stack is Empty\n");
                else
                    printf("Stack is Not Empty\n");
                break;

            case 7:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }
    } while (choice != 7);

    return 0;
}
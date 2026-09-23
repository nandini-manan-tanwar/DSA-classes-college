int choice;

    do
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. isFull\n");
        printf("4. isEmpty\n");
        printf("5. Peek\n");
        printf("6. Display\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
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
                if (isFull())
                    printf("Stack is Full.\n");
                else
                    printf("Stack is not Full.\n");
                break;

            case 4:
                if (isEmpty())
                    printf("Stack is Empty.\n");
                else
                    printf("Stack is not Empty.\n");
                break;

            case 5:
                peek();
                break;

            case 6:
                display();
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}
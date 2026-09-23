#include<stdio.h>
#include<conio.h>
#define MAX 10

int front=-1,rear=-1;

int q[MAX];
void enqueue()
{
    int value;
    printf("enter value \n");
    scanf("%d",&value);
    if(rear==MAX-1)
    printf("no element can be inserted,due to queue overflow");
    else
    {
      if (front==-1)
          front=0;
     rear=rear+1;
     q[rear]=value;
     printf("%d is inserted",q[rear]);
    }
}


void dequeue()
{
    int temp;
    if(front==-1||front>rear)
      printf("the queue is empty no element can be dequeued");


    else if (front>rear)
     {
        front=-1;
        rear=-1;
     }

    else 
     temp=q[front];
     front=front+1;
     printf("the value dequeued is%d",temp);


    
}

void peek()
{
    int value1;
     if(front==-1||front>rear)
      printf("the queue is empty no element can be dequeued");

     else
     value1=q[front];
     printf("the value is %d",value1);
  
}

int main()
{
    int choice;

    do
    {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. QUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. PEEK\n");
        printf("4. Exit\n");

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
                peek();
                break;

           case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}

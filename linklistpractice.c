#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void node_making()
{
    
    struct node *p,*q,*r;
    p=(struct node*)malloc(sizeof(struct node));
    q=(struct node*)malloc(sizeof(struct node));
    r=(struct node*)malloc(sizeof(struct node));
    p->data=50; p->next=q;
    q->data=60;q->next=r;
    r->data=70;r->next=NULL;
    head=p;
}

void printing_node()
{
   struct node *temp = head;       
    while (temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void searching_node()
{
    int ITEM;
    struct node *LOC;
    printf("\nenter item to be searched\n");
    scanf("%d",&ITEM);
    struct node *temp = head;       
    while (temp != NULL) 
    {
       if(ITEM==temp->data)
       {
        LOC=temp;
        break;
       }
       else
        temp=temp->next;
        LOC=NULL;

    }
   if (LOC==NULL)
   printf("item not found");
   else
   printf("item found at %d",LOC);
}
int main()
{
    node_making();
    printing_node();
    searching_node();
}
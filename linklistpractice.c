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
   printf("item not found\n");
   else
   printf("item found at %d\n",LOC);
}


void insert_begin()
{
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
if (new==NULL)
{
    printf("overflow of memory\n");
    return;
}
int ITEM;
printf("enter data to be stored in first node\n");
scanf("%d",&ITEM);
new->data=ITEM,new->next=head;
head=new;
struct node *temp = head; 
    printf("new node=");   
    while (temp != NULL) 
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
}

void insert_lastnode()
{
    printf("\n");
    struct node *new;
new=(struct node*)malloc(sizeof(struct node));
if (new==NULL)
{
    printf("overflow of memory\n");
    return;
}
int ITEM;
printf("enter data to be stored in last node\n");
scanf("%d",&ITEM);
new->data=ITEM;
if (head==NULL)
       { 
        head=new ;
        printf("nope wrong");
        return;
       }

  struct node *temp = head; 
    while (temp->next!= NULL) 
    {
        temp=temp->next;
    }
    temp->next=new;
    struct node *ptr = head; 
    printf("new node=");   
    do
    {
        printf(" %d", ptr->data);
        ptr = ptr->next;
    }while (ptr!=NULL);
   
}



int main()
{
    node_making();
    printing_node();
    searching_node();
    insert_begin();
    insert_lastnode();
}
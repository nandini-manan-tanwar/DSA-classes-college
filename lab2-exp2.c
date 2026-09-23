#include<stdio.h>
#include<conio.h>
#define max 5
int stack [max];
int top=-1;
int isfull()
{
  top==max-1;
}

int isempty()
{
  top==-1;
}

void push(int value)
{
  if(isfull())
  {
    printf("overflow");
  }
  else
  {
    top=top+1;
    stack[max]=value;
    printf("%d pushed to stack",value);
  }

}

int pop()
{
  if(isempty())
  {
    printf("underflow");
    return -1;
  }
  else
  {
   return stack[top];
  }
  top--;
}

void display()
{
 if(isempty())
 {
  printf("stack is empty");
 }
 printf("the stack is bottom to top");
  for(int j=0;j<=top;j++)
 {
  printf("element-[%d]: [%d]",j,stack[j]);
 }

}
int main ()
{
   push(1);
   push(2);
   push(3);
   push(4);
   push(5);
   push(6);
   display();
   printf("Popped: %d\n", pop());
   display();
   for(int j=top;j>=0;j--)
   {
     printf("element-[%d]: [%d]",j,stack[j]);
   }
}
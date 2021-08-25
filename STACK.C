#include<stdio.h>
#define max 3
int stack[max],top=-1;
int push();
int pop();
int peek();
int display();
int main(void)
{
  int ch;
  do
  {
   printf("\n *****Main Menu*****");
   printf("\n 1.Push");
   printf("\n 2.Pop");
   printf("\n 3.Peek");
   printf("\n 4.Display");
   printf("\n 5.Exit");
   printf("\n Enter your option: ");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:push();
	   break;
    case 2:pop();
	   break;
    case 3:peek();
	   break;
    case 4:display();
	   break;
   }
  }while(ch!=5);
 return 0;
}
 int push()
 {
  int item;

  if(top==max-1)
   printf("Overflow");
  else
  {
   printf("Enter the element to push: ");
   scanf("%d",&item);
   top=top+1;
   stack[top]=item;
  }

  return 0;
 }
 int pop()
 {
   int val;
   if(top==-1)
    printf("Underflow");
   else
   {
    val=stack[top];
    top=top-1;
    printf("Popped element is %d ",val);
   }
  return 0;
 }
 int peek()
 {
  if(top==-1)
   printf("Stack is empty");
  else
   printf("Top element is %d",stack[top]);
  return 0;
 }
 int display()
 {
  int i;
  if(top==-1)
   printf("Stack is empty ");
  else
  {
   printf("*****Stack*****\n");
   for(i=0;i<=top;i++)
   {
    printf("%d\t",stack[i]);
   }
  }
  return 0;
 }
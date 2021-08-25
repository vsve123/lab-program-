#include<stdio.h>
#define Max 5
static int cqueue[Max];
static int front=-1,rear=-1;
int insert();
int Delete();
int display();
int main()
{
 int ch;
 do
 {
  printf("\n***Main Menu***\n");
  printf("\n 1:Insert");
  printf("\n 2:Delete");
  printf("\n 3:Display");
  printf("\n 4:Exit");
  printf("\n Enter your choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:insert();
   break;
   case 2:Delete();
   break;
   case 3:display();
   break;

  }
 }while(ch!=4);
 return 0;
}
int insert()
{
 int item;
 if(front==0&&rear==Max-1)
 {
 printf("Overflow");
 }
 else
 {
  printf("Enter the element to insert :");
  scanf("%d",&item);
  if(front==-1&&rear==-1)
  {
   rear=0;
   front=0;
   cqueue[rear]=item;
  }
  else if(rear==Max-1&&front!=0)
  {
   rear=0;
   cqueue[rear]=item;
  }
  else
  {
   rear=rear+1;
   cqueue[rear]=item;
  }
 }
 return 0;
}
int Delete()
{
 int val;
 if(front==-1 ||rear==-1)
 {
  printf("Under flow ");
 }
 else
 {
  val=cqueue[front];
  if(front==rear)
  {
   front=-1;
   rear=-1;
  }
  else if(front==Max-1)
  {
   front=0;
  }
  else
  {
   front=front+1;
  }
  printf("Deleted element is %d ",val);
 }
 return 0;
}
int display()
{
 int i;
 if(front==-1&&rear==-1)
 printf("Circular queue is empty ");
 else
 {
  printf("***Circular Queue***\n");
  if(front<rear)
  {
   for(i=front;i<=rear;i++)
   printf("%d\t",cqueue[i]);
  }
  else
  {
   for(i=front;i<Max;i++)
   printf("%d\t",cqueue[i]);
   for(i=0;i<=rear;i++)
   printf("%d\t",cqueue[i]);
  }
 }
 return 0;
}

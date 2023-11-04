// Program to implement circular queue

#include<stdio.h>
// #include<conio.h>
#define SIZE 10
int queue [SIZE];
int f=-1,r=-1;
void enqueue(int no)
{
 if((f==r+1)||(f==0 && r==SIZE-1))
{
  printf("overflow \n");
}
 else
{
  if(f==-1)
   f=0;
   r=(r+1)%SIZE;
   queue[r]=no;
}//else
}
 void dequeue()
{
 int no;
 if(f==-1)
 printf("underflow \n");
 else
{
  no=queue[f];
  if(f==r)
{
   f=-1;
   r=-1;
}
   else
   f=(f+1)%SIZE;
   printf("deleted element %d \n",no);
}//else
}
  void display()
{
  int i;
  if(f==-1)
  printf("queue is empty \n");
  else
{
   printf("front->%d",i);
   printf("Element->");
   for(i=f;i!=r;i=(i+1)%SIZE)
   printf("%d \t",queue[i]);
   printf("rear=%d \n",r);
}
}
 int main()
 {
 int ch,val;
//  clrscr();
 do
{
 printf("circular queue operations \n");
 printf("1: Enqueue \n 2:Dequeue \n 3:Display \n 4:Exit \n");
 printf("Enter your choice:\n");
 scanf("%d",&ch);
 switch(ch)
{
  case 1:printf("Enter the value:");
  scanf("%d",&val);
  enqueue(val);
  break;
  case 2:dequeue();
  break;
  case 3:display();
  break;
//   case 4:exit(0);
  default:printf("Invalid choice \n");
}
}
  while(ch!=4);
//   getch();
  return(0);
}




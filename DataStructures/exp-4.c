// Program to Implement linear queue 

#include<stdio.h>
// #include<conio.h>
#define MAX 10
int queue[MAX];
int f=-1,r=-1;
void enqueue();
void dequeue();
void display();
int main()
{
int ch;
// clrscr();
do {
printf(">>>>QUEUE OPERATION<<<<\n");
printf("1: Enqueue\n2: dequeue\n3: Display\n4: Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch) {
 case 1: enqueue();break;
 case 2: dequeue();break;
 case 3: display();break;
 case 4: exit(0);
 default : printf("Invalid value");
}
}
while(ch!=4);
// getch();
return 0;
}
void enqueue() {
int no;
printf("Enter Element\n");
scanf("%d",&no);
if(r==MAX-1)
printf("Overflow\n");
else
if(f==-1&&r==-1)
f=r=0;
else
r++;
queue[r]=no;
}
void dequeue() {
if(f==-1||f>r)
printf("Undreflow\n");
else
printf("Deleted Element %d\n",queue[f]);
f++;
if(f>r)
f=-1; }
void display() {
int i;
if(f==-1||f>r)
printf("Underflow\n");
else {
for(i=f ; i<=r ; i++){
printf("%d\t",queue[i]);
}
}
}

// evaulating postfix

#include<stdio.h>
// #include<conio.h>
#include<math.h>
#include<ctype.h>
#define max 20
int stack[20];
int top=-1;
void push(int x)
{
stack[++top]=x;
}
int pop()
{
return stack[top--];

}
int main()
{
char exp[50];
char*e;
int n1,n2,n3,num;
// clrscr();
printf("\nEnter postfix expression :");
scanf("%s",exp);
e=exp;
while(*e!='\0')
{
if(isdigit(*e))
{
num =*e-48;
push(num);
}
else
{
n2=pop();
n1=pop();
switch(*e)
{
case'+': n3=n1+n2;
break;
case'-': n3=n1-n2;
break;
case'/': n3=n1/n2;
break;
case'%': n3=n1%n2;
break;
case'^': n3=(int)pow(n1,n2);
break;
case'*': n3=n1*n2;
break;
}
push(n3);

}
e++;

}
printf("\nThe result of equation %s is = %d",exp,pop());
// getch();
return 0;
}
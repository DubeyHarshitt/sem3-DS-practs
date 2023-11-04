// Convert infix to postfix using stack 

#include <stdio.h>
// #include <conio.h>
#include <ctype.h>
char stack[50]; 
int top = -1;
void push(char x)
{
top++; 
stack[top] = x;
}
char pop() 
{
if (top == -1) 
{ 
return -1;
} 
else 
{
return stack[top--];
}
}
int priority(char x) 
{ if (x == '(')
return 0;
else if (x == '+' || x == '-') 
return 1;
else if (x == '*' || x == '/') 
return 2;
else if (x == '^' || x == '%') 
return 3;
else
return -1;
}
int main() 
{
char exp[50]; 
char *e, x;
// clrscr();
printf("Enter the expression: ");
scanf("%s", exp); 
e = exp;
while (*e != '\0')
{
if (isalnum(*e)) 
printf("%c", *e);
else if (*e == '(') 
push(*e);
else if (*e == ')') 
{
while ((x = pop()) != '(') 
printf("%c", x);
}
else 
{
while (top != -1 && priority(stack[top]) >= priority(*e)) 
{
printf("%c", pop());
}
push(*e);
}
e++;
}
while (top!=-1)
{
printf("%c",pop());
}
// getch(); 
return 0;
}
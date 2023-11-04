// Implement stack using C to perform basic stack operations

#include<stdio.h>
#define size 5
int top = -1 , stk[size]; 
void push();
void pop();
void display();
void exit();
int main(){    
    int ch ;
    while(1){
        printf("Stack Operations \n");
        printf("1:Push \n2:Pop \n3:Display \n4:Exit \n");
        printf("Enter Your Choice");
        scanf("%d",&ch);
    }
    
    switch (ch)
    {
    case 1: push();
        break;
    
    case 2: pop();
        break;
        
    case 3: display();
        break;

    case 4: exit(0);
        break;

    default: printf("Enter Valid Choice");
        break;
    }
}

void push(){
    int x;
    if (top == size-1)
    {
        printf("Stack is Overflow \n");
    }
    else{
        printf("Enter the Element \n");
        scanf("%d",&x);
        top++;
        stk[top]=x;     
    }
}

void pop(){
    if(top == -1){
        printf("Stack is Underflow \n");
    }
    else{
        printf("Top element is %d",stk[top]);
        top--;
    }
}

void display(){
    int i;
    if (top == -1)
    {
        printf("Stack is Underflow");
    }
    else{
        for (i =top ; i>=0 ; i++)
        {
            printf("%d \n", stk[i]);
        }    
    }
}

// void exit(){
//     int ch = 0;
// }
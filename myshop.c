#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int ch,ele,top=-1;
int del;
struct myshop
{
  char name[10];
};
typedef struct myshop shop;
shop s[SIZE];
void push()
{
     if (top >= SIZE - 1)
    {
        printf("Stack overflow\n");
    }
    
    top++;
    printf("\nEnter name of the item:");
    scanf("%s",s[top].name);

}
int pop()
{
  if (top < 0)
    {
        printf("Stack underflow\n");
        return -1;
    }
    top--;
    printf("Popped element is %s\n", s[top].name);
    return 0;
    
 
}
void display()
{
 if (top < 0)
    {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack elements:\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%s\n", s[i].name);
    }

}
int main()
{
  
   for (;;)
    {
        printf("Enter your choice:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &ch);
  switch (ch)
  {
  case 1:
    push();
    break;
  
  case 2:
    del=pop();
    break;
  case 3:
     display();
    break;
  case 4:
    exit(0);
  }
  }
 
}


#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int ch,ele,del,top= -1;
int arr[SIZE];
void push()
{
  if (top == SIZE-1) {
    printf("Stack Overflow\n");
    return;
  }
   top++;
   arr[top] = ele;
   
}
int pop()
{
    printf("\nPopped element is %d",arr[top]);
    top--;
    return arr[top] ;
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
        printf("%d\n", arr[i]);
    }
}
int main()
{
    
    for(; ;)
    {
     printf("Enter yiur choice");
     scanf("%d",&ch);
     switch (ch)
     {
     case 1:
        printf("\nEnter elements to be pushed");
        scanf("%d",&ele);
        push();

        /*if(top>SIZE)
        {
          printf("overflow");
        }
        else
        {
         push();
        }*/
        
        break;
     
     case 2:
        del=pop();
        printf("%d",del);
        break;
     case 3:
        display();
        break;
     case 4:
        exit(0);
     }
    }
}

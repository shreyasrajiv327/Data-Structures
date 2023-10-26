#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int que[SIZE];
int ele,del,front,back,ch;
front = -1;
back = -1;
void push()
{

}
void pop()
{
 if((back==SIZE-1 && front==0) || (front=back-1))
 {
  printf("\nQueue is full");
 }
 else
 {
   printf("\nEnter element to be entered:");
   scanf("%d",&ele);
   
 }

}
void display()
{

}
int main()
{
 for( ; ; )
 {
        printf("\nEnter your choice:\n");
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
        pop();
        break;

        case 3:
        display();
        break;

        case 4:
        exit(0);

        default:
        printf("Invalid choice\n");
        
       }
      }
}
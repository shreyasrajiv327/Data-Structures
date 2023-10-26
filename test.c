#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int que[SIZE];
int ele,del,ch;
int front=-1,back=-1;
void push()
{
   if(back == SIZE-1 && front != 0)
   {
    printf("\nQueue is full");
   }
   back=-1;/*why?*/
   printf("\nEnter element:");
   scanf("%d",&ele);
   que[++back]=ele;
   if(front == -1)
   front = 0;
   printf("\nFRONT:%d",front);
   printf("\nBACK:%d",back);

}
int pop()
{
  if((front==-1 && back==-1))
  {
    printf("\nQueue is empty:");
    return 0;
  }
  else if(back==SIZE-1)
  {
    back=-1;
    printf("\nFRONT:%d",front);
    front++;
    printf("\nFRONT:%d",front);
    del=que[front];
    printf("\nDequeued Item is:%d",del);
    return del;
  }
  else
  {
    printf("\nFRONT:%d",front);
    front++;
    printf("\nFRONT:%d",front);
    del=que[front];
    printf("\nDequeued Item is:%d",del);
    return del;
  }
}
void display()
{
  int i;
  if(back<front)
  {
    printf("\nThe elements are :");
    for(i=0;i<SIZE-1;i++)
    {
      printf("\n%d",que[i]);
    }
  }
  else
  {
    printf("\nThe elements are:");
    for(i=front;i<=back;i++)
    {
      printf("\n%d",que[i]);
    }
  }
}
int main()
{
  for(; ;)
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
                display();
                break;

            case 2:
                del = pop();
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
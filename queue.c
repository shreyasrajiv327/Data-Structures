#include<stdio.h>
#define SIZE 3
int front,end,ch,ele,del;
front=-1;
end=-1;
/*FIFO First in and first out*/
int arr[SIZE];
void enqueue()
{
 if(end==SIZE-1)
 {
   printf("\nQueue is full");
 }
 else
 {
   arr[end++]=ele;
 }
}
int dequeue()
{
  if(front==SIZE-1)
  {
    printf("Stack Empty");
    return -1;
  }
  else
  { 
    int deq;
    arr[front++]=del;
    printf("The dequeued element is %d",deq);
    return deq;   

  }
}
void display()
{
  
}
int main()
{
 switch (ch)
 {
 case 1:
   printf("\nEnter the element to be pushed");
   scanf("%d",&ele);
   enqueue();
    
    break;
 
 case 2:
    del=dequeue();
    break;
 }
}
#include<stdio.h>
#define SIZE 5
#define SIGE 5
int arr[SIZE];
int ar5[SIGE];
int ele,del,top=-1;
void input()
{
  int i;
  for(i=0;i<SIZE;i++)
  {
    printf("\nEnter element for the index %d:",arr[i]);
    scanf("%d",&arr[i]);
  }
}
void push()
{
  if(top>SIGE)
  {
    printf("Overflow");
  }
  else
  {
    top++;
    ar5[top]=ele;
  }
}
void div5()
{
  int i;
  for(i=0;i<SIZE;i++)
  {
    if(arr[i]%5==0)
    {
        ele=arr[i];
        push();
    }
  }
}
int pop()
{
    if(top==-1)
    {
        printf("underflow");
        return -1;
    }
    else
    {
        printf("Popped element is %d",ar5[top]);
        top--;
        return ar5[top];
        
    }
}
void display()
{
  int i;
  for(i=top;i>=0;i--)
  {
    printf("\nElement: %d",ar5[i]);
  }
}
int main()
{
  input();
  div5();
  del=pop();
  display();

  return 0;
}
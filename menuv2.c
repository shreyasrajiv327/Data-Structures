#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int ch,ele,del,top=-1;
int arr[SIZE];
void push()
{
    if(top>ele)
    {
     printf("\nOverflow");
    }
    else
    {
    arr[++top]=ele;
    }
}
int main()
{
    for( ; ; )
    {
     printf("\nEnter your choice");
     scanf("%d",&ch);
     switch (ch)
     {
     case 1:
        
        break;
     
     case 2:
        break;
     }
    }
}

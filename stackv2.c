#include<stdio.h>
int n;
struct stack
{
 int arr[10];
 int top;
};
typedef struct stack st;

/*#include<stdio.h>

#define MAX_SIZE 100

int arr[MAX_SIZE];
int top = -1;

void push()
{
    int k;
    printf("How many elements you want to enter?");
    scanf("%d",&k);
    int i;
    for(i=0;i<k;i++)
    {
      printf("Enter element:");
      scanf("%d",&arr[top+1]);
      top++;
    }
}

void pop()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("\nStack element: %d", arr[i]);
    }
    top = -1;
}

void peek()
{
    if(top == -1) {
        printf("\nStack is empty");
    } else {
        printf("\nValue of top: %d", top);
        printf("\nPeek: %d", arr[top]);
    }
}

int main()
{
    int n;
    printf("Enter Size of stack: ");
    scanf("%d",&n);

    push();

    printf("\nValue of Top is: %d",top);

    pop();

    printf("\nValue of Top is: %d",top);

    peek();
    
    return 0;
}
*/
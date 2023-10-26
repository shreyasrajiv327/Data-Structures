#include<stdio.h>
int n=3;
int arr[n];
int top;
void input()
{
  printf("Enter the size of the stack");
  scanf("%d",&n);
   arr[n];
}
void push()
{
    int k;
    printf("How many elements you want to enter?");
    scanf("%d",&k);
    int i;
    for(i=0;i<k;i++)
    {
      printf("Enter element:");
      scanf("%d",&arr[i]);
     }
      top=n-i;

}
void pop()
{
 int i;
 for(i=0;i<top;i++)
 {
  printf("\nStack elements are :%d",arr[i]);
  top=n-1-1;
 }

} 
void peek()
{
  printf("\nValue of top:%d",top);
  printf("\nPeek:%d",arr[top]);
}

int main()
{
    input();
    push();
    pop();
    peek();
    
   
}

/*#include<stdio.h>
#include<stdlib.h>

int *arr;
int top = -1;

void push(int n)
{
    int k;
    printf("How many elements you want to enter?");
    scanf("%d",&k);

    if(top + k >= n) {
        printf("Stack overflow\n");
        return;
    }

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
    printf("Enter size of stack: ");
    scanf("%d",&n);

    arr = (int *) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }

    push(n);

    printf("\nValue of Top is: %d",top);

    pop();

    printf("\nValue of Top is: %d",top);

    peek();

    free(arr);
    return 0;
}
*/
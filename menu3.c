#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int ch, ele, del, top = -1;
int arr[SIZE];

void push()
{
    if (top >= SIZE - 1)
    {
        printf("Stack overflow\n");
    }
    
    top++;
    arr[top] = ele;
}

int pop()
{
    if (top < 0)
    {
        printf("Stack underflow\n");
        return -1;
    }
    
    int popped_element = arr[top];
    top--;
    printf("Popped element is %d\n", popped_element);
    return popped_element;
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
                printf("Enter element to be pushed: ");
                scanf("%d", &ele);
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

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 3

struct element {
    int value;
};

struct element que[SIZE];
int front = -1;
int back = -1;
int ch, del;

void push()
{
    if((back == SIZE - 1 && front == 0) || (front == back + 1))
    {
        printf("\nQueue is full");
    }
    else
    {
        if(back == SIZE - 1 && front != 0)
            back = -1;

        printf("\nEnter element to be entered:");
        scanf("%d", &que[++back].value);

        if(front == -1)
            front = 0;
    }
}

void pop()
{
    if(front == -1 && back == -1)
        printf("Queue is empty");
    else
    {
        del = que[front++].value;
        printf("Dequeued element is %d", del);

        if(front - 1 == back)
            front = back = -1;

        if(front == SIZE)
            front = 0;
    }
}

void display()
{
    if(front == -1)
        printf("\nQueue is Empty!\n");
    else
    {
        int i;
        printf("\nQueue Elements are:\n");

        if(front <= back)
        {
            for(i = front; i <= back; i++)
                printf("%d\t", que[i].value);
        }
        else
        {
            for(i = 0; i <= back; i++) 
                printf("%d\t", que[i].value);

            for(i = front; i <= SIZE - 1; i++) 
                printf("%d\t", que[i].value);
        }
    }
}

int main()
{
    for (;;)
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

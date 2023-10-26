#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define STACK_SIZE 50
#define LENGTH 50

void push(char item, int *top, char s[])
{
    if(*top == STACK_SIZE - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    s[++(*top)] = item;
}
 
char pop(int *top, char s[])
{
    char item_deleted;

    if(*top == -1)
    {
        printf("Stack underflow\n");
        return 0;
    }
    item_deleted = s[*top];
    (*top)--;

    return item_deleted;
}

int priority(char symbol)
{
    switch(symbol)
    {
        case '#':   return 0;

        case '(':   return 1;

        case '+':
        case '-':   return 2;

        case '*':
        case '/':   return 3;

        case '$':
        case '^':   return 4;

        default:  return -1;
    }
}

void infix_to_postfix(char infix[], char postfix[])
{
    char symbol, s[LENGTH];
    int i, j, top;
    int len = strlen(infix);

    top = -1;
    push('#', &top, s);
    j = 0;

    for(i = 0; i < len; i++)
    {
        symbol = infix[i];

        if(symbol == '(')
            push(symbol, &top, s);

        else if(isalnum(symbol))
            postfix[j++] = symbol;

        else if(symbol == ')')
        {
            while(s[top] != '(')
                postfix[j++] = pop(&top, s);
            pop(&top, s);
        }

        else
        {
            while(priority(s[top]) >= priority(symbol))
                postfix[j++] = pop(&top, s);

            push(symbol, &top, s);
        }
    }

    while(s[top] != '#')
        postfix[j++] = pop(&top, s);

    postfix[j] = '\0';
}

int main()
{
    char infix[LENGTH], postfix[LENGTH];

    printf("Enter a valid infix expression (maximum length %d):\n", LENGTH-1);
    scanf("%s", infix);

    infix_to_postfix(infix, postfix);

    printf("Given Infix expression:\t%s\n", infix);
    printf("Converted Postfix expression:\t%s\n", postfix);

    return 0;
}
#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define SIZE 20
#define MAX 20
char infix[SIZE];
char postfix[MAX];
char prio[SIZE];
int top= -1;
char symbol;
void push()
{
    if(top==SIZE-1)
    {
        printf("\noverflow");
    }
    else
    {
     prio[top++]=symbol;
    }
}
char pop()
{
    char delete;
    if(top==-1)
    {
        printf("\nUnderflow");
        return 0;
    }
    else
    {
      delete=prio[top];
      top--;
      return delete;
    }
}
int priority()
{
    switch (symbol)
    {
        case '#':   
        return 0;

        case '(':   
        return 1;

        case '+':
        case '-':   
        return 2;

        case '*':
        case '/':   
        return 3;

        case '$':
        case '^':   
        return 4;

       default: return -1;
    }
}
void postfix_infix()
{
  int i,j;
  int len=strlen(infix);
  symbol='#';
  push();
  j = 0;
  for(i=0;i<len;i++)
  {
    symbol=infix[i];
    if(symbol=='(')
    {
        push();
    }
    else if (isalnum(symbol))
    {
        postfix[j++]=symbol;
    }
    else if(symbol==')')
    {
        while(priority(prio[top]) >= priority(symbol))
        {
            postfix[j++]=pop();
            push();

        }
    }
     while(prio[top] != '#')
        postfix[j++] = pop();

    postfix[j] = '\0';
    
  }
}
int main()
{
    printf("\nEnter infix expression:");
    scanf("%s",infix);
     postfix_infix();
      printf("Given Infix expression:\t%s\n", infix);
    printf("Converted Postfix expression:\t%s\n", postfix);

    return 0;
}
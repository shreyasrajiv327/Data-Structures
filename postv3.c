#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 20
char infix[SIZE];
char postfix[SIZE];

void push(char item,char stack[],int *top)
{
  if(*top==SIZE-1)
  {
    printf("Overflow");
  }
  else
  {
    stack[++(*top)]= item; 
  }
}
char pop(char stack[],int *top)
{
    char item_deleted;

    if(*top == -1)
    {
        printf("Stack underflow\n");
        return 0;
    }
    item_deleted = stack[(*top)];
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
void infix_to_postfix() {
    char stack[SIZE],symbol;
    int i,j;  
    int len=strlen(infix);   
    int top=-1;
    push('#',stack,&top);
    j=0;
    for(i=0;i<len;i++) {
        symbol=infix[i];
        if(symbol=='(') {
            push(symbol,stack,&top);
        }
        else if(isalnum(symbol)) {
            postfix[j++]=infix[i];
        }
        else if(symbol==')') {
            while(stack[top]!='(') {
                postfix[j]=pop(stack,&top);
                j++;
            }
            pop(stack,&top); // Pop the '('
        }
        else {
            while(priority(stack[top])>=priority(symbol)) {
                postfix[j]=pop(stack,&top);
                j++;
            }
            push(symbol,stack,&top); 
        }
    }
    while(stack[top]!='#') {
        postfix[j]=pop(stack,&top);
        j++;
    }
    
}

int main()
{   
    
    printf("\nEnter infix expression");
    scanf("%s",infix);
    infix_to_postfix();
    int i=0;
    printf("Given Infix expression:\t%s\n", infix);
    printf("Converted Postfix expression:\t%s\n", postfix);

    return 0;

}
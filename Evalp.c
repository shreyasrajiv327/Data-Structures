#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 20

char infix[SIZE];
char postfix[SIZE];

void push(char item, char stack[], int *top) {
  if (*top == SIZE - 1) {
    printf("Overflow");
  } else {
    stack[*top] = item;
    (*top)++;
  }
}

char pop(char stack[], int *top) {
  char delete;
  if (*top == -1) {
    printf("\nUnderflow");
    return -1;
  } else {
    (*top)--;
    delete = stack[*top];
    return delete;
  }
}

int priority(char symbol) {
  switch (symbol) {
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
    default:
      return -1;
  }
}

void infix_to_postfix() {
  char stack[SIZE], symbol;
  int i, j, len, top;
  len = strlen(infix);
  top = -1;
  push('#', stack, &top);
  j = 0;
  for (i = 0; i < len; i++) {
    symbol = infix[i];
    if (symbol == '(') {
      push(symbol, stack, &top);
    } else if (isalnum(symbol)) {
      postfix[j++] = symbol;
    } else if (symbol == ')') {
      while (stack[top] != '(') {
        postfix[j] = pop(stack, &top);
        j++;
      }
      pop(stack, &top);  // Pop the '(' symbol from stack
    } else {
      while (priority(stack[top]) >= priority(symbol)) {
        postfix[j] = pop(stack, &top);
        j++;
      }
      push(symbol, stack, &top);
    }
  }
  while (stack[top] != '#') {
    postfix[j] = pop(stack, &top);
    j++;
  }
  postfix[j] = '\0';
}

int main() {
  printf("Enter infix expression: ");
  scanf("%s", infix);
  infix_to_postfix();
  printf("Given Infix expression: %s\n", infix);
  printf("Converted Postfix expression: %s\n", postfix);
  return 0;
}

#include <stdio.h>
#include <ctype.h> 
#define MAX_SIZE 100

int front = 0, rear = -1;
char queue[MAX_SIZE];

void enqueue(char element) {
    queue[++rear] = element;
}

char dequeue() {
    return queue[front++];
}

int isEmpty() {
    return rear < front;
}

void display() {
    if (isEmpty()) {
        printf("EMPTY\n");
        return;
    }
    
    for (int i = front; i <= rear; i++) {
        printf("%c\n", queue[i]);
    }
}

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char input;
    
    while (1) {
        scanf(" %c", &input);
        
        if (input == '\'') {
            display();
            break;
        }
        
        if (isVowel(input)) {
            if (!isEmpty()) {
                dequeue();
            }
        } else {
            enqueue(input);
        }
    }
    
    return 0;
}

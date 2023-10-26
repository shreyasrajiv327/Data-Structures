//implementation of singly linked lists

#include <stdio.h>
#include <stdlib.h> //need thhis library for malloc,calloc,realloc

typedef struct node {
    int val;
    struct node *link;
}node;

typedef struct list {
    node *head;
    int numelements;                                                                              
}list;

list* create_list() {
    list *lst = (list *)malloc(sizeof(list));
    (*lst).head = NULL;
    lst->numelements=0;
    printf("Size of the list is : %d\n", lst->numelements);
    return lst;
}

void add_front(list *lst, int element) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->val = element;
    new_node->link = lst->head;
    lst->head = new_node;
    lst->numelements++;
}

void add_back(list *lst, int element) {
    
}

void traversing(list *lst) {
    node *current = lst->head;
    while (current != NULL) {
        printf("%d\n",current->val);
        current = current->link;
    }
}

int main() {
    list *lst = create_list();
    int choice, element;
    for(;;)
    {
        printf("Enter your choice :\n");
        printf("1.Add front\n");
        printf("2.Display\n");
        printf("3.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 :
                
                printf("Enter element to be entered to the front : ");
                scanf("%d",&element);
                add_front(lst, element);
                break;
            
            case 2 :
                printf("Enter element to be entered to the back : ");
                scanf("%d",&element);
                add_front(lst, element);
                break;
            
            case 3 :
                traversing(lst);
                break;
            
            case 4 :
                exit(0);

            default :
                printf("Invalid choice\n");
        }
    }
}
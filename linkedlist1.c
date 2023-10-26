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
    node *new_node = (node *)malloc(sizeof(node));
    node *last = lst->head; 
    new_node->val = element;
    new_node->link = NULL;
    if (lst->head == NULL)
    {
       lst->head = new_node;
    }  
    while (last != NULL) {
        last = last->link;
        if(last == NULL)
        {
            last->link = new_node;
        }
    }
    lst->numelements++;
}

void insert_after(list *lst, int element, int key) {
    node *new_node = (node *)malloc(sizeof(node));
    node *prev = lst->head; 
    new_node->val = element;
    new_node->link = NULL;
    if (lst->head == NULL)
    {
       printf("\nList is empty\n");
    }  
    
    new_node->link = prev->link;
    prev->link = new_node;
    lst->numelements++;
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
    int choice, element, key;
    for(;;)
    {
        printf("Enter your choice :\n");
        printf("1.Add front\n");
        printf("2.Add back\n");
        printf("3.Add back\n");
        printf("4.Display\n");
        printf("5.Exit\n");
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
                add_back(lst, element);
                break;

            case 3 :
                printf("Enter element to be entered : ");
                scanf("%d",&element);
                printf("Enter the element after which insertion needs to take place : ");
                scanf("%d",&key);
                insert_after(lst, element, key);
                break;
            
            case 4 :
                traversing(lst);
                break;
            
            case 5 :
                exit(0);

            default :
                printf("Invalid choice\n");
        }
    }
}

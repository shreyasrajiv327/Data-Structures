#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node node;

struct list
{
    node *head;
    node *tail;
    int numelements;
};
typedef struct list list;

list *create_list()
{
    list *lst=(list*)malloc(sizeof(list));
    lst->head=NULL;
    lst->tail=NULL;
    lst->numelements=0;
    return lst;
}

void add_front(int ele,list *lst)
{
    node *new_node=(node*)malloc(sizeof(node));
    new_node->data=ele;
    new_node->next=lst->head;
    new_node->prev=NULL;
    if(lst->numelements==0)
    {
        lst->tail=new_node;
    }
    else{
        lst->head->prev=new_node;
    }
    lst->head=new_node;
    lst->numelements++;
}

void add_back(int ele,list *lst)
{
    node *new_node=(node*)malloc(sizeof(node));
    new_node->data=ele;
    new_node->next=NULL;
    new_node->prev=lst->tail;
    if(lst->numelements==0)
    {
        lst->head=new_node;
        lst->tail=new_node;
    }
    else{
        lst->tail->next=new_node;
        lst->tail=new_node;
    }
}

int del_front_list(list *l){
if ( is_empty(l) ) {
printf("Error: list is empty!\n");
return 0;
}
int val = l->head->data;
node *n = l->head;
if (l->numelements == 1) {
l->head = NULL;
l->tail = NULL;
} else {
l->head = l->head->next;
l->head->prev = NULL;
}
l->numelements--;
free(n);
printf("popping value %d\n", val);
return val;
}

int del_back_list(list *l)
{
if ( is_empty(l) ) {
printf("Error: list is empty!\n");
return 0;
}
node *n = l->tail;
int val = n->data; //head is the same as tail
if (l->numelements == 1) {
l->head = NULL;
l->tail = NULL;
} else {
l->tail = n->prev;
l->tail->next = NULL;
}
free(n);
l->numelements--;
printf("popping value %d\n", val);
return val;
}
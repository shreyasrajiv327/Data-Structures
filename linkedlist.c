#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *add;
};
typedef struct node node;

struct list{
    node *head;
    int numelements;
};
typedef struct list list;

list* createlost()
{
    list *lst=(list *)malloc(sizeof(list));
    (*lst).head=NULL;
    lst->numelements=0;
   printf("Size of the list is : %d\n", lst->numelements);
    return lst;
}

void addfront(list *lst,int element)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data=element;
    new_node->add=lst->head;
    lst->numelements++;
}

void transverse(list *lst)
{
  node *current= lst->head;
  while(current!=NULL)
  {
    printf("\nValue:%d",current->data);
    current=current->add;
  }
}

void insertback(list *lst,int elements)
{
  node *new_node=(node *)malloc(sizeof(node));
  node *last=lst->head;
  new_node->data=elements;
  new_node->add=NULL;
  if(lst->head==NULL)
  {
    lst->head= new_node;
  }
  while(last !=NULL)
  {
    last->add= new_node;
    if(lst->head==NULL)
  {
    lst->head= new_node;
  }
  }
  lst->numelements++;
}

void insertafter(list *lst,int elements,int key)
{
  node *new_node=(node *)malloc(sizeof(node));
  node *prev=lst->head;
  new_node->data=elements;
  new_node->add=NULL;
  if(lst->head=NULL)
  {
    printf("\nEmpty list");
  }
  new_node->add=prev->add;
  prev->add=new_node;
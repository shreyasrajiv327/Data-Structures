#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *add;
};
typedef struct node node;

struct list
{
    node *head;
    node *tail;
    int numelements;
};
typedef struct list list;

list* createlist()
{
    list *lst =(list *)malloc(sizeof(list));
    (*lst).head = NULL;
    lst->numelements=0;
    printf("\nSize of the List is:%d",lst->numelements);
    return lst;
}

void addfront(list *lst,int element)
{
  node *new_node=(node*)malloc(sizeof(new_node));
  new_node->data=element;
  new_node->add=lst->head;
  lst->head=new_node;
  lst->numelements++;
}

void traversing(list *lst)
{
   node *current=lst->head;
   while(current!=NULL)
   {
    printf("\nValue:%d",current->data);
    current= current->add;
   }
}

int main()
{
    list *lst= createlist();   
    int ch,element,key;
    for( ; ;)
    {
        printf("\nEnter your choice");
        printf("\n1.Add front");
        printf("\n2.Display");
        printf("\n3.Exit");
        scanf("\n%d",&ch);
        switch (ch)
        {
        case 1 :
            printf("\nEnter the element you want to insert on the front of the list");
            scanf("%d",&element);
            addfront(lst,element);
            break;
        
        case 2:
            printf("\nThe elements are:");
            traversing(lst);
            break;
        case 3:
           exit(0);
        default:
            printf("\nInvalid choice");
        }
    }
}
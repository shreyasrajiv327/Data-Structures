#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *add;
};
typedef struct node node;

struct list {
  node *head;
  int numelements;
};
typedef struct list list;

list *createlist() {
  list *lst = (list *)malloc(sizeof(list));
  lst->head = NULL;
  lst->numelements = 0;
  return lst;
}

void addfront(list *lst, int element) {
  node *new_node = (node *)malloc(sizeof(node));
  new_node->data = element;
  new_node->add = lst->head;
  lst->head = new_node;
  lst->numelements++;
}

void addback(list *lst, int element) {
  node *new_node = (node *)malloc(sizeof(node));
  node *current = lst->head;
  new_node->data = element;
  new_node->add = NULL;
  if (lst->head == NULL) {
    lst->head = new_node;
  } else {
    while (current->add != 0) {
      current = current->add;
    }
    current->add = new_node;
  }
  printf("size of list = %d\n", lst->numelements);
}

void delfront(list *lst) {
  node *del = lst->head;
  int val = lst->head->data;
  lst->head = lst->head->add;
  printf("\nValue popped out is :%d", val);
  free(del);
  lst->numelements--;
}

void delback(list *lst) {
  node *del;
  node *current = lst->head;
  while (current->add->add != 0) {
    current = current->add;
  }
  int val = current->add->data;
  printf("\ndelted:%d", val);
  del = current->add;
  free(del);
  lst->numelements--;
}
void traversing(list *lst) {
  node *current;
  current = lst->head;
  while (current != NULL) {
    printf("\nValue:%d", current->data);
    current = current->add;
  }
}
void free_list(list *lst) {
  node *current = lst->head;
  while (current != NULL) {
    node *temp = current;
    current = current->add;
    free(temp);
  }
  lst->head = NULL;
  lst->numelements = 0;
}

int main() {
  list *lst = createlist();
  int choice, element, key;
  for (;;) {
    printf("Enter your choice :\n");
    printf("1.Add front\n");
    printf("2.Add back\n");
    printf("3.del front\n");
    printf("4.del back\n");
    printf("5.Display\n");
    printf("6.FREE\n");
    printf("7.Exit\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:

      printf("Enter element to be entered to the front : ");
      scanf("%d", &element);
      addfront(lst, element);
      break;

    case 2:
      printf("Enter element to be entered to the back : ");
      scanf("%d", &element);
      addback(lst, element);
      break;

    case 3:
      delfront(lst);
      break;

    case 4:
      delback(lst);
      break;

    case 5:
      traversing(lst);
      break;

    case 6:
      free_list(lst);
      printf("List freed.\n");
      break;

    case 7:
      exit(0);

    default:
      printf("Invalid choice\n");
      ;
    }
  }
}
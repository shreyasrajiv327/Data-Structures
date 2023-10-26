#include<stdio.h>

struct bake
{
 float price;
 char item[10];
 int qty;
};
typedef struct bake bakery;
int main()
{   float tcost;
    bakery b;
        printf("Enter item:");
        scanf("%s",b.item);
        printf("Enter price:");
        scanf("%f",&b.price);
        printf("Enter qty:");
        scanf("%d",&b.qty);
    
    tcost=b.price*b.qty;
    printf("\nTotal cost:%f",tcost);

}


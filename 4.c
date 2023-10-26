#include<stdio.h>
int main()
{
    struct dis{
        char name[10];
        float price;
        int pages;

    }book[2];
    int i;
    for(i=0;i<2;i++)
    {
      printf("Enter name of the book");
      scanf("%s",book[i].name);
      printf("Enter price");
      scanf("%f",&book[i].price);
      printf("No of pages");
      scanf("%d",&book[i].pages);
    }
    char nbook[10];
    printf("Enter the book you want bro:");
    scanf("%s",nbook);
    int s=0;
    for(i=0;i<2;i++)
    {
        if(nbook==book[i].name)
        {
          s=i;
        }
    }
    printf("The name of the book %s",book[s].name);
    return 0;

}
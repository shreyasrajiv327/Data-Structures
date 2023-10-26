#include<stdio.h>
int sum_num(int *a,int *b)
{
  int sum;
  sum=*a+*b;
  return sum;
}
void output(int *a,int *b,int *add)
{
 printf("\n The sum of two of %d and %d is %d",*a,*b,*add);
}
void input()
{
  int a,b,add;
  printf("\nEnter values for a and b:");
  scanf("%d%d",&a,&b);
  add=sum_num(&a,&b);
  output(&a,&b,&add);
}
int main()
{
  input();
  
  
}
#include<stdio.h>
int sum_num(a,b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(a,b,add)
{
 printf("\n The sum of two of %d and %d is %d",a,b,add);
}
void input(int *p,int *q)
{
  printf("\nEnter values for a and b:");
  scanf("%d%d",&*p,&*q);
}
int main()
{
  int a,b,add;
  input(&a,&b);
  add=sum_num(a,b);
  output(a,b,add);
}
  
  

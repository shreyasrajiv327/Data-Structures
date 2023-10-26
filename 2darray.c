#include<stdio.h>
int main()
{
    int i;
    int j,rows,cols;
    int arr[rows][cols];
    printf("\nEnter Value of rows and columns:");
    scanf("%d%d",&rows,&cols);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
          printf("\nEnter Value:");
          scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
          printf("%d",arr[i][j]);
          if(j==cols-1)
          {
            printf("\n");
          }
          
        }
    }


}
#include<stdio.h>
#include<string.h>
int main()
{
   struct stud{
    char name[10];
    float marks;
   }student[3];
   int i,j;
   for(i=0;i<3;i++)
   {
    printf("\nEnter name of the student");
    scanf("%s",student[i].name);
    printf("Enter the marks score by the student");
    scanf("%f",&student[i].marks);
   }
   for(i=0;i<3;i++)
   {
     printf("%s",student[i].name);
     for(j=0;j<=10-strlen(student[i].name);j++)
     {  
        printf(" ");
     }
     printf("%f",student[i].marks);
     printf("\n");
   }
   for(i=0;i<3;i++)
   {
    if(student[i].marks>=40)
    {
        printf("%s Passed with %f marks",student[i].name,student[i].marks);
    }
    else
    {
       printf("%s Failed with %f marks",student[i].name,student[i].marks); 
    }
    printf("\n");
   }


}
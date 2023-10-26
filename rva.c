/* Write code to demonstrate the following
1. Understand Declaring arrays, Initializing, setting/changing values
2. Looping through array: Inputting values, Printing all values, searching, comparing any other operations
3. Multidimensional arrays: 2 dimensional, 5 dimensional..
4. Strings Vs Character arrays
5. Array of strings */

#include <stdio.h>
#include <string.h>

void array_1d()
{
    int array1[]={1,2,3}; //Declaring and initialising an array 
    printf("Array 1\n"); //printing the whole array
    for (int i=0; i<3; i++)
    {
        printf("%d\n",array1[i]);
    }
   
    int array2[3]; //Declaring an array
    for (int i=0; i<3; i++) //initialising an array through loop
    {
        array2[i]=2*i; 
    }
    printf("Array 2\n"); //printing the whole array
    for (int i=0; i<3; i++)
    {
        printf("%d\n",array2[i]);
    }

    printf("array1[2] = %d\n",array1[2]); //accessing values of an array

    array2[0]=10;
    printf("array2[0] = %d\n",array2[0]); //modifying values of elements in an array
}

void array_2d()
{
    int matrix[2][3] = {{1,2,3},{4,5,6}}; //Makes a 2d array of 2 rows and 3 columns

    printf("matrix[0][1] = %d", matrix[0][1]); //Accessing elements in 2d array

    matrix[0][0] = 9; 
    printf(" matrix[0][0] = %d\n", matrix[0][0]); //modifying values of elements in a 2d array

    printf("2d Array in matrix form\n"); //printing the whole array through looping
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void str_char()
{
    char ans;
    char name1[10];
    char name2[10];
    printf("Enter name 1 : "); //string array
    scanf("%s",name1);
    printf("Enter name 2\n");
    for(int i=0; i<10; i++)
    {
        printf("enter character [%d] : ",i+1);
        scanf(" %c",&name2[i]); //character array
        printf("do you want to enter more characters?\nenter y for yes and n for no : ");
        scanf(" %c",&ans); //character 
        if (ans=='n')
        {
            break;
        }
    }

    printf("Name 1 = %s\n",name1);
    printf("Name 2 = ");
    for(int i=0; i<10; i++)
    {
        printf("%c",name2[i]);
    }
    printf("\n");  
}

void arr_of_str()
{
    char fname[10]; //string array
    char arr[3][10]; //declaring an array of string

    for(int i=0; i<3; i++)
    {
        printf("Enter name [%d] : ", i+1);
        scanf("%s",fname);
        strcpy(arr[i], fname); 
    }

    for (int j=0; j<3; j++) //printing the array of string
    {
        printf("%s\n",arr[j]);
    }
}


int main()
{
    array_1d();
    array_2d();
    str_char();
    arr_of_str();
}
#include<stdio.h>
int main()
{
    int x;
    char a;
    float b;
    int *p;
    char *c;
    float *f;
    int arr[5];
    int size=sizeof(x);
    printf("\nMemory allocated is:%ld",size);
    printf("\nSize of char a is%ld",sizeof(a));
    printf("\nSize of float b is %ld",sizeof(b));
    printf("\nSize of pointer p is %ld",sizeof(*p));
    printf("\nSize of pointer c%ld",sizeof(c));
    printf("\nSize of pointer f %ld",sizeof(f));
    printf("\nSize of array %ld",sizeof(arr));
}
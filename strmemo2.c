#include <stdio.h>

struct struct1 {
  char a; 
  int x; 
}; 
typedef struct struct1 struct1;

struct struct2 {
  char c1; 
  int x; 
  char c2;
}; 
typedef struct struct2 struct2;

struct struct3 {
     char c1;
     char c2;
     int x;
    
  
};
typedef struct struct3 struct3;

int main() {
  struct1 s1;  
  struct2 s2; 
  struct3 s3; 
  
  printf("\n Size of struct1 is %d", sizeof(s1));
  printf("\n Size of struct2 is %d", sizeof(s2));
  printf("\n Size of struct3 is %d", sizeof(s3));
}
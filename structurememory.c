#include <stdio.h>
#pragma pack(1)

struct mymarks {
  float IA1; 
  char a;
  int x; 
 double d; 
  char subject[15];
}; 

int main() {
  struct mymarks m1; 
  printf("\n Size of my structure is %d", sizeof(m1));
  printf("\n Size of my structure - subject is %d", sizeof(m1.subject));
  printf("\n Size of my structure - IA1 is %d", sizeof(m1.IA1));
  printf("\n Size of my structure - d is %d", sizeof(m1.d));
  printf("\n Size of my structure - a is %d", sizeof(m1.a));
  printf("\n Size of my structure - x is %d", sizeof(m1.x));
}
#include <stdio.h>

int main() {
  printf("Sizes and Ranges of Data Types:\n");

  unsigned char uc=0;

  while(unsigned char(uc) <= unsigned char (uc+1))
  {
    uc++;
      }
  printf("uc = %uc",uc);

  return 0;
}

#include <stdio.h>

void display(int a[][13])
{
  int i, j;

  for (i = 0; i < 13; i++) {
    for (j = 0; j < 13; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int arr1[13][13];
  int i, j;

  for (i = 0; i < 13; i++) {
    for (j = 0; j < 13; j++) {
      arr1[i][j] = i + j;
    }
  }
  display(arr1);

  return 0;
}

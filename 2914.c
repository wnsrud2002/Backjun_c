#include <stdio.h>

int main(void) {
  int A, I, result = 0;
  scanf("%d %d",&A, &I);
  result = A * (I-1) + 1;
  printf("%d", result);
}
#include <stdio.h>

int main(void) {
  int A, B;
  scanf("%d",&A);
  scanf("%d",&B);

  printf("%d\n", A * ((B % 100) % 10));
  printf("%d\n", A * ((B % 100) / 10));
  printf("%d\n", A * (B / 100));
  printf("%d", A * B);
  return 0;
}
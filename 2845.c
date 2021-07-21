#include <stdio.h>

int main(void) {
  int L, P, re = 0;
  int a1, a2, a3, a4, a5;

  scanf("%d %d",&L, &P);
  re = L * P;
  scanf("%d %d %d %d %d",&a1, &a2, &a3, &a4, &a5);
  printf("%d %d %d %d %d",a1 - re, a2 - re, a3 - re, a4 - re, a5 - re);
  return 0;
}
#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, n5, sum= 0;
  scanf("%d %d %d %d %d",&n1 , &n2, &n3, &n4 ,&n5);
  sum = (((n1*n1) + (n2*n2) + (n3*n3) + (n4*n4) + (n5*n5))%10);
  printf("%d",sum);
  return 0;
}